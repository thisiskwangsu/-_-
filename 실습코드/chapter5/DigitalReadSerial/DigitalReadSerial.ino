int pushButton = 2;

void setup()
{
  Serial.begin(9600);               //시리얼 통신 속도를 9600bps로 초기화
  pinMode (pushButton, INPUT);      //푸시 버튼 핀을 입력으로 설정
}

void loop()
{
  int buttonState = digitalRead (pushButton); //입력 핀 상태 읽음
  Serial.println (buttonState);                //버튼 상태를 시리얼 모니터 창에 출력
  delay(1);                                    //1 ms 지연
}