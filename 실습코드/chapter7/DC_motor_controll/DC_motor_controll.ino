int motorPin = 9; 		// 9번 핀 사용
void setup()
{
   Serial.begin (9600); 	// 시리얼 통신 속도 9600 bps로 설정
   Serial.println (“Motor speed 0 to 255 input”);
}

void loop()
{
   if (Serial.available()) 	    // 데이터가 수신되면,
   {
      int speed = Serial.parseInt();    // 입력된 값을 정수로 저장

      if ( speed >= 0 && speed <= 255)  // 0에서 255의 값이면,
      {
         Serial.print (“Motor speed = “);
         Serial.println (speed);
         analogWrite (motorPin, speed); // 입력된 값으로 모터 동작
      }
   }
}
