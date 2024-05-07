int ledPin = 9; //9번 핀에 LED연결

void setup() //아무것도 연결 안함
{

}

void loop()
{
  //fadeValue 변수를 선언하고 최솟값에서 최댓값까지 5씩 늘린다.
  for (int fadeValue = 0; fadeValue <= 255; fadeValue += 5)
  {
    analogWrite (ledPin, fadeValue); //fadeValue 값 설정
    delay (30); //30ms대기
  }

  //fadeValue변수를 선언하고 최솟값에서 최댓값까지 5씩 줄인다
  for(int fadeValue = 255; fadeValue >= 0; fadevalude -= 5)
  {
    analogWirte (ledPin, fadeValue); //fadeValue 값 설정
    delay(30); //30ms대기
  }
}