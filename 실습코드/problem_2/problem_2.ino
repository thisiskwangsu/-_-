#define C 261 //도
#define D 293 //레
#define E 329 //미

int notes[3] = {C, D, E};
int tempo = 200; //duration값 설정

int redPin = 11; //빨간색 핀 보드 11번 연결
int greenPin = 10; //10번 연결
int bluePin = 9; //9번 연결

int sirenPin = 3; //부저의 +극을 아두이노 보드 3번에 연결
int buttonPin = 2; //푸시 버튼의 핀 번호 2

int buttonState = 0; //입력 핀의 상태 값을 저장하는 변수

void setup()
{
  pinMode(buttonPin, INPUT);  //2번 핀 입력으로 설정
}

void loop()
{
  buttonState = digitalRead (buttonPin); //2번 핀 입력 상태 값 저장

if(buttonState == HIGH)
{
  tone(sirenPin,notes[0], tempo); //red do
  setColor(0, 255, 255);
  delay(1000);

  tone(sirenPin,notes[1], tempo); //green re
  setColor(255, 0, 255);
  delay(1000);

  tone(sirenPin,notes[2], tempo);//blue me
  setColor(255, 255, 0);
  delay(1000);
}
}
void setColor(int red, int green, int blue)
{
  analogWrite(redPin, red); //11번 핀 red설정
  analogWrite(greenPin, green); //10번 핀 red설정
  analogWrite(bluePin, blue); //9번 핀 red설정
}
