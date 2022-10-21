# ESP32 Quick Internet Clock (automatic timeset)
ESP32 Internet Clock, Handsfree sets time automatically.

![clock7](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock7.jpg "clock7")

**Clone Project**
From github download/clone the project to get started

https://github.com/khinds10/QuickInternetClock

**3D Printing:**

From the "3D Print" folder print 1 back panel, 1 case, 2 edges and 1 front panel.

**Supplies Needed**

1.2" 7 Segment Display

![7 Segment](https://github.com/khinds10/QuickInternetClock/blob/master/construction/7Segment.jpg "7 Segment")

ESP DEV KIT v1

![ESP32](https://github.com/khinds10/QuickInternetClock/blob/master/construction/ESP32.jpg "ESP32")

OTG USB Splitter (display needs 5V Power)

![OTG-Splitter](https://github.com/khinds10/QuickInternetClock/blob/master/construction/OTG-Splitter.jpg "OTG-Splitter")

Polycarbonate-Semi-Transparent (smoke gray)

![Polycarbonate-Semi-Transparent](https://github.com/khinds10/QuickInternetClock/blob/master/construction/Polycarbonate-Semi-Transparent.jpg "Polycarbonate-Semi-Transparent")

**Wiring:**

![Schematic](https://github.com/khinds10/QuickInternetClock/blob/master/construction/Schematic.png "Schematic")

Connect the SCL/SDA Pins from the display to the ESP32.

Connect the RED and BLACK wires from the USB split cable to the GND and +5 and V_IO pins of the display, it needs a full 5V of power to work.

Connect the GND of the ESP32 to the GND of the Display as well.

Solder and connect the Pins according the schematic.

![clock4](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock4.jpg "clock4")

Gather the 3D printed panels and assemble as follows, you'll need to cut the plexiglass to fit the frame.

![clock1](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock1.jpg "clock1")

![clock2](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock2.jpg "clock2")

![clock3](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock3.jpg "clock3")

![clock5](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock5.jpg "clock5")

Attach the back frame and panel cover with the female OTG usb cable extended to plug in to the power supply.

![clock6](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock6.jpg "clock6")

**Flash the ESP32**

 Load the project folder (which you've checked out) to Visual Studio Code (this is free software).  

***IMPORTANT***

Copy the src/settings-default.h to settings.h and adjust your `ssid` , `password` variables to your own WiFi connection.

Adjust `gmtOffset_sec` as a number of seconds different from Greenich Mean Time.  Looks like -18000 seconds is -5 hours for the timezone of America/Eastern Standard.

Plug the ESP32 USB to the computer USB and build/deploy the project.

NOTE: a lot of times you have to plug the ESP32 directly to the computer and not use the USB splitter, it's interfering with the deploy process to the ESP32, after flashing, plug it back to the USB splitter so the ESP and the 7 Segment are all connected to USB power correctly.

**Finished!**

![clock8](https://github.com/khinds10/QuickInternetClock/blob/master/construction/clock8.jpg "clock8")



