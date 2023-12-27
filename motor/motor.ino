int A_IA = 10;
int A_IB = 9;



void setup() {
 Serial.begin(115200);
 pinMode(A_IA, OUTPUT);
 pinMode(A_IB, OUTPUT);
}

void loop() {
  analogWrite(A_IA, 15);
  analogWrite(A_IB, 0);


}
