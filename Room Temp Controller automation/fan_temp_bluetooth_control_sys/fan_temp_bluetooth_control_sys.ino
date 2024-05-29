#include <Adafruit_Sensor.h>  // Include Libraries
#include <DHT.h>
#include <DHT_U.h>

#define DHTPIN 7         // DHT11 sensor data pin
#define DHTTYPE DHT11    // DHT sensor type

#define MOTOR_PIN_ENA 9  // Enable pin for motor driver (PWM pin)
#define MOTOR_PIN_IN1 10  // Input pin 1 for motor driver
#define MOTOR_PIN_IN2 11  // Input pin 2 for motor driver

#define TEMPERATURE_THRESHOLD0 22 // Temperature threshold to adjust motor speed
#define TEMPERATURE_THRESHOLD 28
#define TEMPERATURE_THRESHOLD1 30 

DHT dht(DHTPIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();  
}

void loop() {
  delay(1000); 

  float temperature = dht.readTemperature(); // Read temperature in Celsius
  if (isnan(temperature)) {
    Serial.println("Failed to read temperature from DHT sensor!");
    return;
  }
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  char data;
  data='0';
  if(Serial.available()>0)
   {     
    Serial.print("bluetooth: ");
    data= Serial.read(); // reading the data received from the bluetooth module
    Serial.print(data);
    }

  // Adjust motor speed based on temperature and bluetooth command
  if ((temperature > TEMPERATURE_THRESHOLD1) || (data == '1')){ // Increase fan speed
  
    analogWrite(MOTOR_PIN_ENA, 255);    // Set the motor speed to maximum (255)
    digitalWrite(MOTOR_PIN_IN1, HIGH);  // Set motor direction (forward)
    digitalWrite(MOTOR_PIN_IN2, LOW);
  }
  
  else if ((temperature > TEMPERATURE_THRESHOLD )) { // starts fan 
    
    analogWrite(MOTOR_PIN_ENA, 120);    // Set the motor speed to a lower value (120)
    digitalWrite(MOTOR_PIN_IN1, HIGH);  
    digitalWrite(MOTOR_PIN_IN2, LOW);
    
  }
  else if ((temperature < TEMPERATURE_THRESHOLD) && (data == '0')) {  // stops motor when temp is below threshold
    
    analogWrite(MOTOR_PIN_ENA, 0);    // Set the motor speed to a value (0)
    digitalWrite(MOTOR_PIN_IN1, HIGH);  
    digitalWrite(MOTOR_PIN_IN2, LOW);
   
  }
  else if (data == '2') {  // force stops the motor 
    
    analogWrite(MOTOR_PIN_ENA, 0);    // Set the motor speed to a value (0)
    digitalWrite(MOTOR_PIN_IN1, HIGH);  
    digitalWrite(MOTOR_PIN_IN2, LOW);
   
  }
  
  delay(50); 
}
