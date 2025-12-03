# ESP32-C6 CN Arduino Package

This repository provides the **Arduino package** for the ESP32-C6 CN board.  
It contains the necessary hardware definitions, board configuration files, and package index JSON to enable support for this board in the Arduino IDE.

## Supported Boards

The following boards are currently included in this package:

- **[Waveshare ESP32-C6 Zero](https://www.waveshare.com/wiki/ESP32-C6-Zero)**  
- **[MakerGO ESP32 C6 SuperMini](https://circuitpython.org/board/makergo_esp32c6_supermini/)**  

## How to Add ESP32-C6 CN Support in Arduino IDE

1. Open the Arduino IDE.
2. Go to **File → Preferences**.
3. In the field **Additional Board Manager URLs**, add the following URL:
    ```
    https://epsilonrt.github.io/esp32c6-cn-package/package_esp32c6_cn_index.json
    ```
    > If multiple URLs are already present, separate them with commas.

4. Click **OK** to save preferences.
5. Go to **Tools → Board → Board Manager**.
6. Search for **ESP32-C6 CN** and install the package.

