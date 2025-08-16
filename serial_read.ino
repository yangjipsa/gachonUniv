void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  char temp[100];  // 입력 버퍼
  if (Serial.available()) 
  {
    byte leng = Serial.readBytes(temp, 20);  // 최대 20바이트 읽기

    Serial.print("Input data Length : ");
    Serial.println(leng);

    for (int i = 0; i < leng; i++) 
    {
      Serial.print(temp[i]);
    }
    Serial.println();
  }
}


/*
void loop() 
{
  if (Serial.available()) 
  {
    String str = Serial.readString();  // 시리얼 모니터에서 입력한 문자열 전체 읽기

    Serial.print("Input data : ");
    Serial.println(str);
  }
}
*/
