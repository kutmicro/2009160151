char buffer[100];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:

  
  delay(100);
  sprintf(buffer, "mic : %d\n", analogRead(A0));
    Serial.write(buffer);
}
