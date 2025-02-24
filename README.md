# Smart-Light-Control

**COMPANY**: CODTECH IT SOLUTIONS

**NAME**: SUKANYA

**INTERN ID**: CT12GFT

**DOMAIN**: INTERNET OF THINGS(IoT)

**BATCH DURATION**: DECEMBER 25TH, 2024 TO FEBRUARY 25TH, 2025

**MENTOR NAME**: NEELA SANTOSH KUMAR

# DESCRIPTION    
This project demonstrates a simple Smart Light Control System using an Arduino Uno and an LED, which is controlled via serial commands. The system allows users to turn the LED ON and OFF by sending commands from the Serial Monitor in the Arduino IDE. The project simulates a basic home automation system, where lights can be remotely controlled using a microcontroller.

**Components Used**                                 
1.	Arduino Uno – The microcontroller that controls the LED based on serial input.                       
2.	LED – Represents a light source that turns ON or OFF based on user commands.                              
3.	Resistor (220Ω) – Limits the current passing through the LED to prevent damage.                                                            
4.	Jumper Wires – Used for electrical connections.                                           

**Circuit Diagram Explanation**                                        
The circuit is designed as follows:                               
•	The LED is connected to pin 9 of the Arduino.                                      
•	A 220Ω resistor is placed in series with the LED to limit the current.                                       
•	The ground (GND) pin of the Arduino is connected to the negative terminal of the LED.                                             
When the Arduino receives a command from the Serial Monitor, it processes the input and controls the LED accordingly.                                         

**Code Details**                                                                   
The Arduino sketch is written in C++, utilizing the Arduino framework.                                         
1.	Define LED Pin:                                                           
The LED is assigned to a specific digital pin on the Arduino.                                    
2.	Setup Function:                                       
Initializes serial communication at a baud rate of 9600 for data exchange.                                      
Configures the LED pin as an output.                                                             
Displays an instruction message in the Serial Monitor to guide the user.                                        
3.	Loop Function:                                           
Checks if any serial data is available from the user.                                                     
Reads the incoming string command until a newline character (\n) is detected.                                         
Removes any unwanted spaces or newline characters from the input.                                    
4.	Processing User Input:                                
If the command is "ON", the Arduino turns the LED ON by setting the pin to HIGH.                                
If the command is "OFF", the Arduino turns the LED OFF by setting the pin to LOW.                                   
If the command is not "ON" or "OFF", the system prints an error message asking for valid input.                                   
5.	Serial Communication Feedback:                                                    
After each command execution, the system sends a confirmation message back to the Serial Monitor.                                       
The user can see whether the LED has been successfully turned ON or OFF.                                         

**Working Principle**                                
1.	The user enters a command (ON or OFF) in the Serial Monitor.                                
2.	The Arduino reads the command and processes it.                                      
3.	If the command is "ON", it activates the LED by setting pin 9 HIGH.                                          
4.	If the command is "OFF", it deactivates the LED by setting pin 9 LOW.                                   
5.	If an invalid command is entered, the system prompts the user to enter the correct input.

**Use Case and Applications**                                                                                          
•	Home Automation – Can be extended to control smart home lights using a mobile app or voice assistant.                             
•	IoT Projects – Can integrate with Wi-Fi modules (ESP8266/NodeMCU) for remote control.                                   
•	Industrial Automation – Can be used for controlling indicator lights in factories and industries.                                       
•	Learning & Education – Ideal for beginners in IoT, embedded systems, and Arduino programming.                                    

**Future Improvements**                           
This project can be enhanced by:                                                             
Adding Wi-Fi/Bluetooth Control – Using ESP8266 or HC-05 module for wireless control.                         
Voice Commands Integration – Using Google Assistant or Alexa for voice-controlled lights.                             
Mobile App Control – Creating an Android/iOS app to control the LED remotely.                                     
Multi-Light System – Expanding the project to control multiple lights and appliances.                       

**Output**    
![Image](https://github.com/user-attachments/assets/22322ade-d6ae-43b0-91ea-d2e55b04096e)
