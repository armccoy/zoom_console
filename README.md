# zoom_console
*Zoom mic/video control console*

**Origin: Elliotmade (4/22/2020)**

- https://elliotmade.com/2020/04/23/physical-mute-button-for-zoom-meetings/
- https://www.youtube.com/watch?v=apGbelheIzg

Used a digispark clone

**To link the 64bit version, into the Digistump tree:**

First, make sure your board includes are all setup properly. Next, shutdown the Arduino IDE completely.  Finally, from a shell prompt, move the Digistump snowflake out of the way, and link in the current shipping version:

`$ cd ~/Library/Arduino15/packages/arduino/tools/avr-gcc`

`$ mv 4.8.1-arduino5 orig.4.8.1`

`$ ln -s /Applications/Arduino.app/Contents/Java/hardware/tools/avr 4.8.1-arduino5`