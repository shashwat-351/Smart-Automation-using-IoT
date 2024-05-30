<h2>Room Temp Controller Project</h2>
<h4>Hardware Required:-</h4>
<h5>1.Arduino UNO<br>2.HC-05 Bluetooth module<br>3.DHT-11 Sensor<br>4.Fan/Motor<br>5.l298N Motor Driver <br>6.Breadboard<br>7.Jumper Wire<br></h5>
<h4>Steps:-</h4>
<h5>1. Install <a href="https://apps.microsoft.com/detail/9nblggh4rsd8?hl=en-us&gl=US">Arduino IDE</a> from the web or Microsoft Store.<br>
2. download or copy the code from the file.<br>
3. Open Arduino IDE and Open a new file.<br>
4. Paste the code here in the new file u just created.<br>
5. Now Download Adafruit MQTT and DHT Libraries.<br>
6. Now Add the downloaded libraries in Arduino IDE: Menu > Sketch > Include Library > Add .zip Library.<br>
7. Now Verify or Compile the Code.<br>
8. If there is no Error and everything seems alright, Connect your Arduino UNO board to the computer via USB cable.<br>
9. Now select 'Arduino UNO' from Menu > Tools > Board > Arduino AVR Boards > Arduino UNO.<br>
10. Now select the Port in which the board is connected i.e. Menu > Tools > Port > select the port "COM....".<br>
11. Now verify and then upload the code.<br>
12. Now remove the Arduino UNO and connect according to the Diagram (in Arduino to hc-05 connection: connect rx to tx and tx to rx ).<br><br>
  <img src="./Screenshot .png"><br><br>
13. After completion, Connect the Arduino UNO to the computer and open the Serial Monitor from the Arduino IDE(keep the bits to 9600 bits).<br>
14. Now install <a href="https://play.google.com/store/apps/details?id=com.broxcode.arduinobluetoothfree&hl=en_US">Arduino Blue Control</a> or any similar app on your phone.<br>
15. Connect your Bluetooth with the 'HC-05' Bluetooth module.<br>
16. Now set the App to give commands:- '1'for FAN ON and '2' for FAN OFF.<br>
17. Your project is ready to test and apply.</h5>
