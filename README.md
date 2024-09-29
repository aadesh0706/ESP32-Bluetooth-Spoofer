```markdown
# ESP32 Bluetooth Spoofing Device

This project turns your ESP32 into a Bluetooth spoofing device that changes its advertised name every second. It can be used for testing and educational purposes. The device will simulate various Bluetooth devices by continuously changing its name, creating confusion or helping in specific development tasks.

![Profile Views](https://komarev.com/ghpvc/?username=aadesh0706&color=blue)
---
## Features:
- Changes Bluetooth device name every second.
- Uses `BluetoothSerial` library to simulate different devices.
- Fully customizable list of spoofed device names.

## Hardware Requirements:
- ESP32 (any model with Bluetooth support)

## Getting Started

### Installation
1. Clone this repository:
   ```bash
   git clone https://github.com/aadesh0706/ESP32-Bluetooth-Spoofer.git
   ```
2. Open the `src/BluetoothSpoofing.ino` file in Arduino IDE.
3. Upload the code to your ESP32.

### Usage
- After uploading, the ESP32 will start advertising as different Bluetooth devices every second.
- You can scan for Bluetooth devices on your phone or laptop and see the device name change.

### Customization
- You can modify the list of device names in the `BluetoothSpoofing.ino` file. Just replace or add new names to the `deviceNames[]` array:
  ```cpp
  const char* deviceNames[] = { 
    "SmartSpeaker", 
    "MyPhone", 
    "Laptop_Pro", 
    // Add more names here
  };
  ```

### License
This project is licensed under the MIT License.

---

**Author**: Aadesh Gulumbe  
Find me on [GitHub](https://github.com/aadesh0706)
```

This `README.md` file contains all the information necessary to get started with the project and provides customization options for users to modify the code.
