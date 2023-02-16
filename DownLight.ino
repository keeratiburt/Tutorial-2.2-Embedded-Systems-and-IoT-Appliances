int BULB = 4;

const byte led = A0;
int value = 0;
float voltageValue = 0;

void setup() {
  Serial.begin(115200);
  analogReadResolution(10);
  pinMode(BULB, OUTPUT);

}

void loop() {
  digitalWrite(BULB, HIGH);
  value = analogRead(led);
  voltageValue =  value * (3.3 / 1024);
  //Serial.print("sensor value = ");
  //Serial.print(value);
  //Serial.print(" voltage value = ");
  //Serial.println(voltageValue);
  if (voltageValue > 2.00){
    Serial.println("LED is on");
  }
  else{
    Serial.println("LED is off");
  }
  delay(500);

}
