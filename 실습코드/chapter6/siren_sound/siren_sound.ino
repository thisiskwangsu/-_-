int sirenPin = 3;                  //부저의 +극을 아두이노 보드 3번에 연결

void setup() {
  // tone 함수 사용 시 입출력 모드 설정 필요 없음
  /*아두이노 보드의 핀으로 특정 주파수의 구형파를 생성하는 것과 관련된 함수로는 tone() 과 noTone()함수가 있다
    tone(pin, frequency)
    tone(pin, frequency, duration)
    noTone(pin)
  */

}

void loop() {
  for (int siren = 200; siren < 2500; siren += 1)
  {
    tone (sirenPin, siren, 10);
  }

  for (int siren = 2500; siren > 200; siren -= 1)
  {
    tone (sirenPin, siren, 10);
  }

}
