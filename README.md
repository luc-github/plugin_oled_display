# grblHAL Plugin for oled display ![Version](https://img.shields.io/badge/dynamic/json?label=Version&query=$.version&url=https://raw.githubusercontent.com/luc-github/plugin_oled_display/refs/heads/main/info.json)

> [!WARNING]
>### Disclaimer
> The software is provided 'as is,' without any warranty of any kind, expressed or implied, including but not limited to the warranties of merchantability, fitness for a particular purpose, and non-infringement. In no event shall the authors or copyright holders be liable for any claim, damages, or other liability, whether in an action of contract, tort, or otherwise, arising from, out of, or in connection with the software or the use or other dealings in the software.
>It is essential that you carefully read and understand this disclaimer before using this software and its components. If you do not agree with any part of this disclaimer, please refrain from using the software.  

Currently only ssd1306 and equivalent (e.g: ssd1315) and sh1106 are supported with a resolution of 128 x 64 pixels.

### Boot
<img src="https://raw.githubusercontent.com/luc-github/Plugin_oled_display/refs/heads/main/pictures/boot.jpg" alt="drawing" width="200"/>

### 3 Axis
<img src="https://raw.githubusercontent.com/luc-github/Plugin_oled_display/refs/heads/main/pictures/3axis.jpg" alt="drawing" width="200"/>

### 4 Axis
<img src="https://raw.githubusercontent.com/luc-github/Plugin_oled_display/refs/heads/main/pictures/4axis.jpg" alt="drawing" width="200"/>

### 5 Axis
<img src="https://raw.githubusercontent.com/luc-github/Plugin_oled_display/refs/heads/main/pictures/5axis.jpg" alt="drawing" width="200"/>

### 6 Axis
<img src="https://raw.githubusercontent.com/luc-github/Plugin_oled_display/refs/heads/main/pictures/6axis.jpg" alt="drawing" width="200"/>

### Using grblHAL Web Builder

The plugin is already part of grblHAL so just select it in 3rd party plugin

### Manual Installation
I fyou do manual compilation:

* In my_machine.h

`#define DISPLAY_ENABLE 33 //DISPLAY_I2C_OLED_1 `   
then    
`#define DISPLAY_DRIVER 1 //DISPLAY_DRIVER_SH1106`   
or    
`#define DISPLAY_DRIVER 2 //DISPLAY_DRIVER_SSD1306`   
and    
`#define I2C_ENABLE 1`   

* Copy plugin repository to  main 

ESP32/main/plugin_oled_display

* Edit ESP32/main/CMakeLists.txt
    - Set a variable for the path of the plugin source code
    
```
set(PLUGIN_OLED_DISPLAY_SOURCE
 plugin_oled_display/plugin_oled_display.c
 plugin_oled_display/oled_display.c
)
```
    - Add the paths to the global source code
    
```
list (APPEND SRCS ${PLUGIN_OLED_DISPLAY_SOURCE})

```

So you should get something like this:

```
set(USB_SOURCE
 usb_serial.c
)

set(PLUGIN_OLED_DISPLAY_SOURCE
 plugin_oled_display/plugin_oled_display.c
 plugin_oled_display/oled_display.c
)

if(EXISTS ${CMAKE_CURRENT_LIST_DIR}/../3rdParty.cmake)
include(${CMAKE_CURRENT_LIST_DIR}/../3rdParty.cmake)
endif()

if("${target}" STREQUAL "esp32s3")
list (APPEND SRCS ${USB_SOURCE})
list (APPEND SRCS ${I2S_S3_SOURCE})
else()
list (APPEND SRCS ${I2S_SOURCE})
endif()

list (APPEND SRCS ${MY_PLUGIN_SOURCE})
list (APPEND SRCS ${NETWORKING_SOURCE})
list (APPEND SRCS ${KEYPAD_SOURCE})
list (APPEND SRCS ${TRINAMIC_SPI_SOURCE})
list (APPEND SRCS ${TRINAMIC_UART_SOURCE})
list (APPEND SRCS ${WEBUI_SOURCE})
list (APPEND SRCS ${SDCARD_SOURCE})
list (APPEND SRCS ${BLUETOOTH_SOURCE})
list (APPEND SRCS ${MODBUS_SOURCE})
list (APPEND SRCS ${SPINDLE_SOURCE})
list (APPEND SRCS ${EEPROM_SOURCE})
list (APPEND SRCS ${LASER_SOURCE})
list (APPEND SRCS ${MISC_PLUGINS_SOURCE})
list (APPEND SRCS ${EMBROIDERY_SOURCE})
list (APPEND SRCS ${OPENPNP_SOURCE})
list (APPEND SRCS ${PLUGIN_OLED_DISPLAY_SOURCE})
```

### Tools

Some tools are available if you want to do more customization - only usable with manual installation.    

1. **Font Converter** (`font_converter.py`) - Converts TrueType fonts to OLED-compatible bitmap font arrays
2. **PNG Converter** (`png_converter.py`) - Converts PNG images to XBM format for OLED display, if you want to change boot screen for example.
3. **Font Metrics Extractor** (`ttf_info_extractor.py`) - Advanced tool for analyzing font metrics and diagnosing rendering issues
4. **Font Generator** (`font_generator.py`) - Create custom bitmap fonts by editing pixel-perfect templates
