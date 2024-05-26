// Arduino Uno R3
const int SWITCH_PIN = 8;
const int LED_PIN = 11;

bool currButtonState = LOW;
bool lastButtonState = LOW;
unsigned short int ledLevel = 0;

void setup()
{
    pinMode(SWITCH_PIN, INPUT);
    pinMode(LED_PIN, OUTPUT);
}

bool debounce()
{
    bool curr = digitalRead(SWITCH_PIN);

    if (lastButtonState != curr)
    {
        delay(5);
        curr = digitalRead(SWITCH_PIN);
    }

    return curr;
}

void loop()
{
    currButtonState = debounce();

    if (lastButtonState == LOW && currButtonState == HIGH)
    {
        ledLevel = (ledLevel + 51);
        if (ledLevel > 255)
            ledLevel = 0;

        analogWrite(LED_PIN, ledLevel);
    }

    lastButtonState = currButtonState;
}
