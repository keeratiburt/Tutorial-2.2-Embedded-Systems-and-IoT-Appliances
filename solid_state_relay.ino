// โค้ดทำหรับ solid state relay โดยจะใช้ GPIO04 ของ ESP32 และใช้เพียง Channel 1 เท่านั้น
// solid state relay ที่นำมาใช้เป็นแบบ low level โดยจะทำงานที่ค่า 0 (low)

const int ch1 = 4;

void setup(){
  pinMode(ch1, OUTPUT);
}

void loop() {
  digitalWrite(ch1, LOW);   // เขียนค่าดิจิทัลไปยังขา GPIO04
  delay(2000);              // รอ 2 วินาที
  digitalWrite(ch1, HIGH);
  delay(2000);         
}