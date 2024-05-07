#define C 262  //도
#define D 294  //레
#define E 330  //미
#define F 349  //파 
#define G 392  //솔
#define A 440  //라
#define B 494  //시

int piezoPin = 3;    //부저의 +극을 아두이노 보드 3번에 연결
int tempo = 200;  //duration 옵션 값 설정
int notes[24] = {G,G,A,A,G,G,E,G,G,E,E,D,G,G,A,A,G,G,E,G,E,D,E,C};

void setup()
{

}

void loop()
{
  for (int i = 0; i < 12; i++)
  {
    tone (piezoPin, notes[i], tempo);         //tempo 200ms
    delay(300);
  }
  delay(100);

  for (int i = 12; i<25; i++)
  {
    tone (piezoPin, notes[i], tempo);
    delay(300);
  }
}