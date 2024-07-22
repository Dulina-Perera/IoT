// Arduino Uno R3
const byte ledPin = 13;

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while (Serial.available() == 0);

  int val = Serial.read() - '0';
  
  if (val == 0)
  {
  	digitalWrite(ledPin, LOW);
    Serial.println("LED is OFF!");
  } 
  else if (val == 1)
  {
  	digitalWrite(ledPin, HIGH);
    Serial.println("LED is ON!");
  }
  else
  {
  	Serial.println("Invalid command!");
  }
}
