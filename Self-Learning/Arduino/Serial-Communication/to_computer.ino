// Arduino Uno R3
const byte potPin = A0;

void setup()
{
  pinMode(potPin, INPUT);
  
  Serial.begin(9600);
}

void loop()
{
  int val = map(analogRead(potPin), 0, 1023, 0, 255);
  Serial.println(val);
  delay(50);
}
