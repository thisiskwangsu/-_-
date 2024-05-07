const int ledPin = 13;             //아두이노 보드의 LED 핀 번호 13

void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if (Serial.available() > 0)
  {
    int button_cmd = Serial.read();

    if (button_cmd == '1')
    {
      digitalWrite (ledPin, HIGH);
      Serial.println("LED ON");
    }
    else if (button_cmd == '0')
    {
      digitalWrite (ledPin, LOW);
      Serial.println("LED OFF");
    }
    else
    {
      Serial.println("Unknown command");
      Serial.println("pushbutton command input :");
    }
  }
}