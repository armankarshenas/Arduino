int blue = 9;
int green = 10;
void setup() {
  // put your setup code here, to run once:
  pinMode(blue,OUTPUT);
  pinMode(green,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(blue,50);
  analogWrite(green,125);
  delay(1000);
}
