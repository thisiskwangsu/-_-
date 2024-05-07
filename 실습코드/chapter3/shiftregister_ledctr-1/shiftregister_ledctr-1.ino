int latchPin = 8; 		// 74HC595의 12번 핀 연결
int clockPin = 12;		// 74HC595의 11번 핀 연결
int dataPin = 11;		// 74HC595의 14번 핀 연결

void setup()
{
  pinMode (latchPin, OUTPUT);	// 아두이노 보드 8번 핀 출력 설정
  pinMode (clockPin, OUTPUT);   	// 아두이노 보드 12번 핀 출력 설정
  pinMode (dataPin, OUTPUT);    	// 아두이노 보드 11번 핀 출력 설정
}
void loop()
{
  for (int number = 0; number < 256; number++)
  {
    digitalWrite (latchPin, LOW);
    shiftOut (dataPin, clockPin, MSBFIRST, number);
    digitalWrite (latchPin, HIGH);
    delay (100);
   }
}

