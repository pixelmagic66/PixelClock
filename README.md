# wordclock

Original software from https://github.com/bitlair/wordclock

Uses the now available Hovstra frame from Ikea https://www.ikea.com/nl/nl/p/hovsta-fotolijst-berkenpatroon-berken-80365755/

Adapted the internal fram structure and other font for the front of the clock.

I was a little bit puzzled by the uploading of the /data directory, this is what I did

- Follow the instructions from here: http://arduino.esp8266.com/Arduino/versions/2.0.0/doc/filesystem.html (this takes some time)
- The upload the software from https://github.com/bitlair/wordclock or if you use my layout and connections use my code
- Connect your WS2812 led strip to the port specified in the code
- Configure the leds (if needed) in the leds tab of Arduino IDE
- 
