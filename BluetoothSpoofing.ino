#include "BluetoothSerial.h" 

BluetoothSerial SerialBT; 

const char* deviceNames[] = { 
  "SmartSpeaker", 
  "MyPhone", 
  "Laptop_Pro", 
  "Wireless_Mouse", 
  "Unknown_Device", 
  "SmartWatch", 
  "Car_Audio", 
  "TV_Bluetooth", 
  "Fitness_Tracker", 
  "Home_Theater" 
}; 

int currentDevice = 0; 

void setup() {
  Serial.begin(115200);   
  SerialBT.begin(deviceNames[currentDevice]); 
  Serial.println("Starting Bluetooth Spoofing...");
}

void loop() {
  static unsigned long lastTime = 0;
  
  if (millis() - lastTime > 1000) {
    SerialBT.end();
    delay(50); 

    currentDevice = (currentDevice + 1) % (sizeof(deviceNames) / sizeof(deviceNames[0]));
    
    SerialBT.begin(deviceNames[currentDevice]);

    Serial.print("Now spoofing as: ");
    Serial.println(deviceNames[currentDevice]);

    lastTime = millis(); 
  }
}
