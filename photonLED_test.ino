// SYSTEM_MODE(SEMI_AUTOMATIC);

int ledPin1 = A5;
int ledPin2 = A4;
int ledPin3 = RX;
int ledPin4 = TX;
int freq = 1000;
int flag = 0;

void setup()
{
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);

  Particle.function("led",ledToggle);

  digitalWrite(ledPin1, HIGH);
  digitalWrite(ledPin2, HIGH);
  digitalWrite(ledPin3, HIGH);
  digitalWrite(ledPin4, HIGH);
}

void loop()
{
  if (flag == 1) {

    pinMode(ledPin1, OUTPUT);
    pinMode(ledPin2, OUTPUT);
    pinMode(ledPin3, OUTPUT);
    pinMode(ledPin4, OUTPUT);

    analogWrite(ledPin1, 128, freq);
    analogWrite(ledPin2, 128, freq);
    analogWrite(ledPin2, 128, freq);
    analogWrite(ledPin2, 128, freq);
  }
  /*pinSetFast(ledPin3);           // set the LED on
  delayMicroseconds(20);
  pinResetFast(ledPin3);       // set the LED off
  delayMicroseconds(40);
  pinSetFast(ledPin3);
  delayMicroseconds(40);
  pinResetFast(ledPin3);
  delayMicroseconds(60);*/
  //analogWrite(ledPin4,128,1000);

  else if (flag == 0) {

    pinMode(ledPin1, INPUT);
    pinMode(ledPin2, INPUT);
    pinMode(ledPin3, INPUT);
    pinMode(ledPin4, INPUT);

  }


}

int ledToggle(String command) {

    if (command=="on") {
        flag = 1;
        return 1;
    }
    else if (command=="off") {
        flag = 0;
        return 0;
    }
    else {
        return -1;
    }
}
