// Arduino Uno R3
const int LED_PIN = 13;

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  
  Serial.begin(9600);
  Serial.print("LED_PIN pin number: ");
  Serial.println(LED_PIN);
  Serial.end();
}

void loop()
{
  digitalWrite(LED_PIN, HIGH);
  delay(500);
  digitalWrite(LED_PIN, LOW);
  delay(500);
}
