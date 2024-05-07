int redPin = 11;        //빨간색 핀. 아두이노 보드 11번 핀에 연결
int greenPin = 10;      //초록색 핀. 아두이노 보드 10번 핀에 연결
int bluePin = 9;        //파란색 핀. 아두이노 보드 9번 핀에 연결
int buttonPin = 2;      //푸시 버튼. 아두이노 보드 2번 핀에 연결

boolean currentButton = LOW;  //현재 버튼 상태
boolean lastButton = LOW;     //이전 버튼 상태
int ledMode;                  //색깔을 선택하기 위한 변수

void setup()
{
  pinMode (buttonPin, INPUT); //2번 핀 입력으로 설정
}

void loop()
{
  currentButton = debounce (lastButton);

  if (lastButton == LOW && currentButton == HIGH)
  {
    ledMode++;
  }
  lastButton = currentButton;
  ColorMode (ledMode);

  if(ledMode == 8)
  {
    ledMode = 0;
  }
}

boolean debounce (boolean push)
{
  boolean current = digitalRead (buttonPin);

  if(push != current)
  {
    delay(5);
    current = digitalRead (buttonPin);
  }
  return current;
}

void setColor (int red, int green, int blue)
{
  analogWrite(redPin, red);      //11번 핀 red설정
  analogWrite(greenPin, green);  //10번 핀 green값 설정
  analogWrite(bluePin, blue);    //9번 핀 blue값 설정
}

void ColorMode (int ledColor)
{
  if (ledColor == 1)
  {
    setColor(0,255,255);       //red
  }
  else if (ledColor == 2)
  {
    setColor(0,161,255);       //orange
  }
  else if (ledColor == 3)
  {
    setColor(0,68,255);       //yellow
  }
  else if (ledColor == 4)
  {
    setColor(255,0,255);       //green
  }
  else if (ledColor == 5)
  {
    setColor(255,255,0);       //blue
  }
  else if (ledColor == 6)
  {
    setColor(250,255,102);       //남색
  }
  else if (ledColor == 7)
  {
    setColor(160,255,0);       //보라
  }
  else
  {
    setColor(255, 255, 255);   //색 없음
  }
}