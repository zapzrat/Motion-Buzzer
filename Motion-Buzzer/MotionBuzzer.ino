int pinMotion = 13;
int buzzer = 11;
void setup() {
  Serial.begin(9600);
  Serial.println("Micro Projects TH");

  pinMode(pinMotion, INPUT);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:

  int buttonState = digitalRead(pinMotion);
  Serial.print("buttonState : "); Serial.println(buttonState);

  if (buttonState == 1) {
    Serial.println("buzzer : on");
    digitalWrite(buzzer, LOW); 
  }
  else if (buttonState == 0) {
    Serial.println("buzzer : off");
     digitalWrite(buzzer, HIGH); 

  }





  delay(1000);

}
