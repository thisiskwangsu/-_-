void setup()
{
   pinMode (3, OUTPUT); 	// 3번 핀 출력 설정
   pinMode (5, OUTPUT); 	// 5번 핀 출력 설정
}

void loop()
{
   digitalWrite (3, HIGH); 	// 한쪽 방향으로 회전
   digitalWrite (5, LOW);
   delay (5000);

   digitalWrite (3, LOW); 	// 반대 방향으로 회전
   digitalWrite (5, HIGH);
   delay (5000);

   digitalWrite (3, LOW); 	// 회전 중지
   digitalWrite (5, LOW);
   delay (5000);
}
