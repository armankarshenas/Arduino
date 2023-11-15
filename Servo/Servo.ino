const int servo = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(servo,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i=0;i<100;i++){
    digitalWrite(servo,HIGH);
    delay(10);
    digitalWrite(servo,LOW);
    delay(10);
  }
  for (int i=0;i<100;i++){
    digitalWrite(servo,HIGH);
    delay(5);
    digitalWrite(servo,LOW);
    delay(5);
  }
}
