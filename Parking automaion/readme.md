<h2>Smart Parking Project</h2>
<h4>Hardware Required:-</h4>
<h5>1.ESP 8266<br>2.Servo Motor<br>3.IR proximity Sensor<br>4.Breadboard<br>5.Jumper Wire<br></h5>
<h4>Steps:-</h4>
<h5>The Online Adafruit Dashboard (to control and monitor the system)<br><br>
1. First, we will make a dashboard using Adafruit IO. To use Adafruit IO, first, you have to create an account on <a href="https://accounts.adafruit.com/users/sign_in">Adafruit IO</a>. To do this, go to the Adafruit IO website and click on ‘Get started for Free’ on the top right of the screen.<br><br>
2. After finishing the account creation process, log in to your account and click on ‘AIO Key’ in the top right corner to get your account username and AIO key. When you click on ‘AIO Key,’ a window will pop up with your Adafruit IO AIO Key and username. Copy this key and username, it will be needed later in the code.<br><br>
3. Now, after this, you need to create a feed. To create a feed, click on ‘Feed.’ Then click on ‘Actions,’ and then on ‘Create a New Feed’.<br><br>
4. After this, a new window will open to enter the Name and Description of the feed. The writing description is optional.<br><br>
5. Click on ‘Create,’ after this; you will be redirected to your newly created feed. For this project, we created a total of nine feeds for exit gate, entry gate, slot 1 entry & exit, slot 2 entry & exit, slot 3 entry & exit, and one for cars parked (in the free trial you can only make 9 feeds, therefore, no feed for 4th slot). After creating feeds, now create an Adafruit IO dashboard to show all of these feeds on a single page. To create a dashboard, click on the Dashboard option and then click on the ‘Action,’ and after this, click on ‘Create a New Dashboard.’ In the next window, enter the name for your dashboard and click on ‘Create.’<br><br>
6. As the dashboard is created now, we will add our feeds to the dashboard. To add a feed, click on the ‘+’ in the top right corner. First, we will add two RESET buttons blocks for Entry and Exit gate and then seven TEXT blocks for parking details. To add a button on the dashboard click on the RESET block. In the next window it will ask you to choose the feed, so click on the entry gate feed.In this final step, give your block a title and customize it accordingly. Change the press value from ‘1’ to ‘ON’. So whenever the button is pressed it will send the ‘ON’ string to NodeMCU, and NodeMCU will perform the further task. If you don’t want to change the press value here, then you can change the condition in the program. After this, follow the same procedure to create another block for the exit gate. To create the rest of the blocks follow the same procedure, but instead of creating a RESET block, create a TEXT block so that you can show the parking details. After creating all the blocks, my dashboard looks like below. You can edit the dashboard by clicking on the settings buttons.<br><br>
ESP Board Setup<br><br>
1. Install <a href="https://apps.microsoft.com/detail/9nblggh4rsd8?hl=en-us&gl=US">Arduino IDE</a> from the web or Microsoft Store.<br>
2. Download or copy the code from the file.<br>
3. Open Arduino IDE and Open a new file.<br>
4. Paste the code here in the new file u just created. Add your wifi hotspot credential and the feeds u just created in Adafruit IO dashboard.<br>
5. Now Download Adafruit MQTT and Other Libraries.<br>
6. Now Add the downloaded libraries in Arduino IDE: Menu > Sketch > Include Library > Add .zip Library.<br>
7. Now download and install ESP 8266 Board Manager: Menu > File > Perferences > Settings > Enter https:// arduino.esp8266.com/stable/package_esp82... into the ‘Additional Board Manager URL’ field and click ‘Ok’ > Menu > Tools > Board > Boards Manager > Search 'ESP8266' > Install the latest ver. of ESP8266.<br>
8. Now select 'NodeMCU 1.0(ESP-12E Module)' from Menu > Tools > Board > ESP8266 Boards > NodeMCU 1.0(ESP-12E Module).<br>
9. Now Verify or Compile the Code.<br>
10. If there is no Error and everything seems alright, Connect your ESP8266 board to the computer via USB cable.<br>
11. Now select the Port in which the board is connected i.e. Menu > Tools > Port > select the port "COM....".<br>
12. Now verify and then upload the code.<br>
12. Now remove the ESP8266 and connect it according to the Diagram.<br><br>
  <img src="./Screenshot .png"><br><br>
13. After completion, Connect the ESP8266 to the computer and open the Serial Monitor from the Arduino IDE(keep the bits to 9600 bits).<br>
14. Now open your wifi hotspot and let the esp wifi connect it.<br>
15. Now open your Adafruit IO dashboard.<br>
16. Now use the dashboard to give commands and monitor the slots.<br>
17. Your project is ready to test and apply.</h5>
