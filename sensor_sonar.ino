// senser : HC-SR04
// pin assign : VCC-5V, GND-GND, TRIG-D7, ECHO-D6

#define TRIG_PIN 7 // HC-SR04의 TRIG 핀이 연결된 핀
#define ECHO_PIN 6 // HC-SR04의 ECHO 핀이 연결된 핀

void setup() 
{
  Serial.begin(9600); // 시리얼 통신 속도를 9600 설정
  pinMode(TRIG_PIN, OUTPUT); // TRIG 핀을 출력 모드로 설정
  pinMode(ECHO_PIN, INPUT);  // ECHO 핀을 입력 모드로 설정
}

void loop()
{
  long duration;
  float distance;

  // HC-SR04 트리거 핀에 펄스를 보냄
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // ECHO 핀에서 반환된 신호의 길이를 측정
  duration = pulseIn(ECHO_PIN, HIGH);

  // 거리를 계산 (음속은 약 34300 cm/s)
  distance = (duration / 2.0) * 0.0343;

  // 거리를 시리얼 모니터에 출력
  Serial.print("거리: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); // 1초 대기
}
