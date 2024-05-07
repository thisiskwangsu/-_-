void setup() {
  pinMode (13, OUTPUT);           //13번 핀에 연결된 LED 사용
  pinMode (12, INPUT);            //12번 핀 입력 선언
  digitalWrite (12, HIGH);        //12번 핀 내부 풀업 저항 활성화
 
}

void loop() {
  int sw_input = digitalRead(12);  //12 번 입력값 sw_input 변수에 저장

  if(sw_input == LOW)              //점퍼 케이블을 서로 연결하면,
  {
    digitalWrite(13, HIGH);         //LED켜짐
  }
  else                              //점퍼 케이블을 연결하지 않으면  
  {
    digitalWrite(13, LOW);          //LED꺼짐
  }

}
