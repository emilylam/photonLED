/*
Basic test code for the CREE MC-E LED

Emily Lam, November 2016
*/

// Does not connect to WiFi
SYSTEM_MODE(SEMI_AUTOMATIC);

// Declare pins and frequency
int white = A5;
int red = A4;
int green = WKP;
int blue = TX;
int freq = 1000;

// Setup
void setup() {
  pinMode(red, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(white, OUTPUT);
}

// Flash LEDs one at a time
void loop() {
  analogWrite(white, 0, freq);
  analogWrite(red, 128, freq);
  delay(500);
  analogWrite(red, 0, freq);
  analogWrite(blue, 128, freq);
  delay(500);
  analogWrite(blue, 0, freq);
  analogWrite(green, 128, freq);
  delay(500);
  analogWrite(green, 0, freq);
  analogWrite(white, 128, freq);
  delay(500);


}
