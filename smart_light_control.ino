#define LED_PIN 9  // Define the pin where the LED is connected

void setup() {
    Serial.begin(9600);  // Start serial communication with a baud rate of 9600
    pinMode(LED_PIN, OUTPUT);  // Set the LED pin as an output
    Serial.println("Enter 'ON' to turn on LED, 'OFF' to turn it off");  // Print instructions to Serial Monitor
}

void loop() {
    // Check if there is any data available to read from the Serial Monitor
    if (Serial.available()) {
        String command = Serial.readStringUntil('\n');  // Read the incoming serial input until a newline character
        command.trim();  // Remove any extra spaces or newline characters
        
        // Check if the received command is "ON"
        if (command == "ON") {
            digitalWrite(LED_PIN, HIGH);  // Turn ON the LED
            Serial.println("LED Turned ON");  // Print confirmation message
        } 
        // Check if the received command is "OFF"
        else if (command == "OFF") {
            digitalWrite(LED_PIN, LOW);  // Turn OFF the LED
            Serial.println("LED Turned OFF");  // Print confirmation message
        } 
        // If the command is invalid, print an error message
        else {
            Serial.println("Invalid Command. Use 'ON' or 'OFF'");  
        }
    }
}
