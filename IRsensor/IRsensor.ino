const int irSensorPin = 2;  // 적외선 센서 디지털 핀 (예: 2번 핀)
    // 감지 임계값 (조절 가능)

void setup() {
  Serial.begin(115200);
  pinMode(irSensorPin, INPUT);
}

void loop() {
  // 적외선 센서 값 읽기
  int irValue = digitalRead(irSensorPin);

  // 감지된 값이 임계값 이상인 경우
  if (irValue == 0) {
    Serial.println("위험위험!");
  }else{
    Serial.println("괜찮괜찮!");
  }

    // 여기에 감지 시 수행할 동작을 추가할 수 있습니다

  delay(1000);  // 측정 주기 (조절 가능)

}