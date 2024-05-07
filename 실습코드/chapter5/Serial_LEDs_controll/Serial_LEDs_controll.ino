int latchPin = 8;                      //74HC595의 8번 핀 연결
int clockPin = 12;                     //74HC595의 12번 핀 연결
int dataPin = 11;                      //74HC595의 11번 핀 연결
int ledOff;                            //LED를 끄기위한 전역번수

void setup()
{
  pinMode (latchPin, OUTPUT);          //아두이노 보드 8번 핀 출력 설정
  pinMode(clockPin, OUTPUT);           //아두이노 보드 12번 핀 출력 설정
  pinMode (dataPin, OUTPUT);           //아두이노 보드 11번 핀 출력 설정
 
  Serial.begin(9600);
  Serial.println("Serial LED Control Input(0~7)");
}

void loop()
{
  if (Serial.available()>0)
  {
    int bitToSet = Serial.read()-48;

    if(bitToSet >= 8 || bitToSet < 0)
    {
      Serial.println("LED Clear");
      ledClear ();
    }
    else
    {
      Serial.print("LED position: ");
      Serial.println(bitToSet);
      registerWrite (bitToSet, HIGH);
    }
  }
}

void registerWrite (int whichPin, int whichState)
{
  byte bitsToSend = 0;

  digitalWrite (latchPin, LOW);

  bitWrite (bitsToSend, whichPin, whichState);

  shiftOut (dataPin, clockPin, MSBFIRST, bitsToSend);

  digitalWrite (latchPin, HIGH);
}

void ledClear()
{
  digitalWrite(latchPin, LOW);

  shiftOut(dataPin, clockPin, MSBFIRST, ledOff);

  digitalWrite(latchPin, HIGH);
}