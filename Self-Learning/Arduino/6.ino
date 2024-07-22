#include <Servo.h>

Servo servo;

const byte servoPin = 9;

void setup()
{
    servo.attach(servoPin);
    Serial.begin(9600);
}

void loop()
{
    for (int i = 0; i <= 180; i = i + 20)
    {
        servo.write(i);
        Serial.println(i);
        delay(1000);
    }
}
