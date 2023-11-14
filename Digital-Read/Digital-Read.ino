int sw = 8;
int led = 9;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(sw,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(sw) == LOW){
    digitalWrite(led,HIGH);
  }
  if (digitalRead(sw) == HIGH){
    digitalWrite(led,LOW);
  }

}
