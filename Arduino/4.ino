// Arduino Uno R3
const byte ledPin = 9;
const byte sensePin = A0;

void setup()
{
    analogReference(DEFAULT);
    pinMode(ledPin, OUTPUT);
}

void loop()
{
    word val = analogRead(sensePin);
    val = constrain(val, 54, 974);

    byte ledLevel = map(val, 54, 974, 255, 0);

    analogWrite(ledPin, ledLevel);
}
