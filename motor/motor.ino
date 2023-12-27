int A_IA = 10;
int A_IB = 9;



void setup() {
 Serial.begin(115200);
 pinMode(A_IA, OUTPUT);
 pinMode(A_IB, OUTPUT);
 
}

void loop() {
  
  if(Serial.available()>0){
    char input = Serial.read();
  //String input = Serial.readstring();
  //if(input[2]=='1'){
  //Serial.println(input[2]);
  }
  if (input == '1') {
    analogWrite(A_IA, 120);
    analogWrite(A_IB, 0);
    Serial.println("turn on");
  }else if (input == '0') {
    analogWrite(A_IA, 0);
    analogWrite(A_IB, 0);
    Serial.println("turn off");
  }
  }
}
