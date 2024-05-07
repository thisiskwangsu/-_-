//setup 함수는 보드에 전원 공급 또는 리셋 버튼을 눌렀을 때 한 번 실행된다.
void setup()
{
  PinMode (13, OUTPUT);
}

//loop함수는 전원이 켜져 있는 동안 무한 반복해서 실행된다.
void loop()
{
  digitalWrite (13, HIGH); //13번 핀에 HIGH 설정. LED켜짐
  delay (1000); //1000ms 동안 대기(시간 지연)
  digitalWrite (13, LOW); //13번 핀에 LOW 설정. LED켜짐
  delay (1000); //1000ms 동안 대기(시간 지연)
}