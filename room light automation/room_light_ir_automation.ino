int inside;
int outside;
const int ir1 = 8;
const int ir2 = 9;
const int led = 10;
const int led1 = 11;
int count = 0;
boolean ir1Triggered = false;
unsigned long ir1Time;
byte currStateA;
byte prevStateA = HIGH;
boolean ir2Triggered  = false;
unsigned long ir2Time;
byte currStateB ;
byte prevStateB = HIGH;
void setup() {
  // put your setup code here, to run once:
 Serial.begin (9600);

  Serial.println("Visitor Counter"); //
pinMode (ir1, INPUT);
pinMode (ir2, INPUT);
pinMode (led, OUTPUT);
pinMode (led1, OUTPUT);
}

void loop() {

currStateA = digitalRead(ir1);



 if (currStateA != prevStateA)

 {

       if (currStateA == LOW)

       {

       ir1Triggered = true;

       ir1Time = millis ();

       }

 }

// prevStateA = currStateA;



 currStateB = digitalRead (ir2);

 if (currStateB != prevStateB)

 {

 if (currStateB == LOW)

 {

 ir2Triggered = true;

 ir2Time = millis ();

 }

 }

// prevStateB = currStateB;



 if (ir2Triggered && ir1Triggered)

{

 if (ir1Time> ir2Time)

 {

 count ++;

    
    inside = inside +1;
    if(count<0)
    {
      count=0;
      inside=0;
      }


Serial.print("IN: ");

Serial.println(inside);

Serial.print("OUT: ");

 Serial.println(outside);

Serial.print("Total Inside: ");

Serial.println(count);

 delay(1000);

 }

 if (ir2Time> ir1Time)

 {

 count--;
    outside = outside +1;

    if(count<0)
  {  
    count=0;
    outside=0;
    }
   

Serial.print("IN: ");

Serial.println(inside);

Serial.print("OUT: ");

 Serial.println(outside);

Serial.print("Total Inside: ");

Serial.println(count);


 
   
    delay(1000);

 }

 ir1Triggered = false;

 ir2Triggered  = false;

}
 if(count==0)
  {
  
    digitalWrite(led,LOW);
    digitalWrite(led1,LOW);
   
    Serial.println("Nobody Inside");
   
    Serial.println("Electricity OFF");
    delay(200);
  }                                                       // Conditions
  
  else
  {
    digitalWrite(led,HIGH);
    digitalWrite(led1,HIGH);    
  }                 
}
