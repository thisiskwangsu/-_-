int motorPin = 9; 	        // 트랜지스터 베이스(B)에 연결할 핀

void setup()
{

}
void loop()
{
   for (int duty = 0; duty < 256; duty++)  //PWM 제어
   {
      analogWrite (motorPin, duty); // 9번 핀에 duty 변숫값 1씩 설정
      delay (50); // 해당 듀티비를 50 ms 지연
   }
}