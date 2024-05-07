int redPin = 6; //빨간색 핀, 아두이노 보드 6번핀에 연결
int greenPin = 5; //초록색 핀, 아두이노 보트 5번핀에 연결
int bluePin = 3; //파란색 핀, 아두이노 보드 3번핀에 연결
int redOff, greenOff, blueOff; //각 LED를 끄기 위한 전역 변수 선언

void setup() //analogWrite 함수 사용시 (PWM)
{             //pinMode 설정 필요 없음

}

void loop()
{
  analogWrite (redPin, 255); //redPin으로 255 값 출력
  delay (1000);              //1000ms지연
  analogWrite (redPin, redOff); //빨간색 LED 끔

  analogWrite (greenPin, 255); //greenPin으로 255 값 출력
  delay (1000);                 //1000ms지연
  analogWrite (greenPin, greenOff); //초록색 LED 끔

  analogWrite (bluePin, 255); //bluePin으로 255 값 출력
  delay (1000);                  //1000ms지연
  analogWrite (bluePin, blueOff); //초록색 LED 끔
}