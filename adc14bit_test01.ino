// Ardunio UNO R4, ADC 14bit

void setup(){
  Serial.begin(9600);
  analogReadResolution(14); //change to 14-bit resolution
}

int read[6];
void loop(){
  read[0] = analogRead(A0); // returns a value between 0-16383
  read[1] = analogRead(A1); // returns a value between 0-16383
  read[2] = analogRead(A2); // returns a value between 0-16383
  read[3] = analogRead(A3); // returns a value between 0-16383
  read[4] = analogRead(A4); // returns a value between 0-16383
  read[5] = analogRead(A5); // returns a value between 0-16383
  for (int i=0;i<6;i++){
    Serial.print(read[i]);
    if (i<5){Serial.print(",");}
  }
  Serial.print("\n");
  delay(1000);
}