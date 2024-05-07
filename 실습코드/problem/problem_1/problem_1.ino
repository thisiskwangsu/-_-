int LED1 = 8; //LED1 8번핀 연결
int LED2 = 10; //LED2 10번 연결
int buttonPin = 2; //푸시버튼 2번 연결

int buttonState = 0; //입력 핀의 상태값을 저장하는 변수

void setup()
{
  pinMode(LED1, OUTPUT);  //8번 디지털 핀을 출력으로 설정
  pinMode(LED2, OUTPUT); ////10번 디지털 핀을 출력으로 설정
  pinMode(buttonPin, INPUT); //2번 핀 입력으로 설정
}

void loop()
{
  buttonState = digitalRead(buttonPin);  //버튼 상태 값을 저장

  if(buttonState == HIGH) // 버튼 누르면
  {
    digitalWrite (LED1, HIGH);
    delay(1000);
    digitalWrite (LED1, LOW);
    delay(1000);
    digitalWrite(LED2, HIGH);
    delay(1000);
    digitalWrite(LED2, LOW);
    delay(1000);
  }
  else
  {
    digitalWrite(LED1, LOW);
    digitalWrite(LED2, LOW);
  }
}