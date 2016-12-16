# photonLED

Breakout board for MC-E LED for the Photon.

Repository includes some barebones example code.

LED wiring:\s\s
white -- A5\s\s
red -- A4\s\s
green -- WKP\s\s
blue -- TX\s\s

There is also a color sensor, TCS34725. It's wired up to the I2C bus. Just use the Adafruit library.

Power:
5V on USB, 5V on terminal block, or 7-12V on DC jack. Total current consumption is around 900mA. Make sure power source can source 1A.
