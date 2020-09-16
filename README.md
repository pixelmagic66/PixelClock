# Pixelclock Dutch 11x9 1/4 

<img src="https://github.com/pixelmagic66/PixelClock/blob/master/images/PixelClock.png" width="600">


Original software from https://github.com/bitlair/wordclock, all credits for the software and design go toward them.

Uses the now (2020) available Hovstra frame from Ikea https://www.ikea.com/nl/nl/p/hovsta-fotolijst-berkenpatroon-berken-80365755/

Adapted the internal frame structure and other font for the front of the clock.

I was a little bit puzzled by the uploading of the /data directory, this is what I did

- Follow the instructions from here: http://arduino.esp8266.com/Arduino/versions/2.0.0/doc/filesystem.html 
- I needed to set the adjust the flash size from 4mb to 3mb
- Upload the /data directory to SPIFFS (if I am correct), this takes some time

This is the other stuff you need te do:

- Upload the software from https://github.com/bitlair/wordclock or if you use my layout and connections use my code, using the Arduino IDE
- Connect your WS2812 led strip to the port specified in the code
- Configure the leds (if needed) in the leds tab of Arduino IDE
- Configure the words if you use other then I did (Dutch)
- Power up and via WiFi AP configure your WiFi network
- Enjoy the clock :)


The font I used is Dotrice found at https://www.1001fonts.com/dotrice-font.html if you need it for another language or layout, the svg file named Wordclock-face.svg

The first plan was to use spacers to add a white plexiglass layer to defuse the light. On the first test with this font and a piece of printer paper the defusion was good enough to not use the plexiglass. After that I redesigned the crossing layers to not use the spacers. 

So the order from back to front is:

- backplate with LED strips and wires on the back
- connecting brackets to isolate the LED's
- a piece of printer paper
- the frontplate, I spray painted it with black paint

Note on the svg files for the laser cutter, red lines ar cutting lines, blue lines are for etching (only used on the backside).

Materials I used:

- 103 pieces 60 led/meter WS2812 (AliExpress)
- Wemos type ESP8266
- 5 volt power brick
- 3mm bearch plywood (from the Gamma)
- Ikea Hovstra 23x23 photo frame
- black spraypaint (Ac-tion)


Tools used:

- Laser cutter (K40 type)
- K40 Whisperer
- Soldering iron
- Sanding paper
- Arduino IDE
- CorelDRAW! (for the front face)
- Inkscape (converting to usable date for K40 Whisperer)
- Fusion360 (the 3d design)

 



