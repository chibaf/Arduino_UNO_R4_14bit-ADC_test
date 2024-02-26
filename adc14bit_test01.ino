// Ardunio UNO R4, ADC 14bit

void setup(){
  Serial.begin(9600);
  analogReadResolution(14); //change to 14-bit resolution
}

int adc[]{A0,A1,A2,A3,A4,A5};
int read[6];
void loop(){
  for (int i=0;i<6;i++){
    read[i]=analogRead(adc[i]);
  }
  for (int i=0;i<6;i++){
    Serial.print(read[i]);
    if (i<5){Serial.print(",");}
  }
  Serial.print("\n");
  delay(1000);
}