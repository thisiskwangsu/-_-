int Led_pin[8] = {2,3,4,5,6,7,8,9}; //핀 2번부터 9번까지 연결

void setup()
{
  for (int i = 0; i < 8; i++) //배열 인덱스 0에서 7까지 증가
  {
    pinMode(Led_pin[i], OUTPUT); //각 핀을 출력으로 설정
  }
}

void loop()
{
  for (int i = 0; i < 8; i++) //배열 인덱스 0에서 7까지 증가
  {
    digitalWrite(Led_pin[i], HIGH); //2번핀부터 차례대로 LED on
    delay(500); //500ms지연
  }

  for (int i = 7; i >= 0; i--) //배열 인덱스 7에서 0까지 감소
  {
    digitalWrite(Led_pin[i], LOW); //9번핀부터 차례대로 LED off
    delay(500); //500ms지연
  }
}