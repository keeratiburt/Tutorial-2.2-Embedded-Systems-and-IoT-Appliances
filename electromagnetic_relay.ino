//ตัวอย่างการใช้งาน Electromagnetic Relay

/*
 * การควบคุมรีเลย์ เราสามารถเขียนค่า digital เพื่อควบคุมรีเลย์ให้สับสวิชต์ได้ด้วยคำสั่ง digitalWrite
 * สามารถนำมาประยุกต์ใช้กับค่าเซ็นเซอร์ได้ด้วยการนำค่าจากเซ็นเซอร์มาเข้าเงื่อนไข
 */

const int bulb = 4;         // กำหนดตัวแปรชื่อ bulb เก็บค่า 4 ซึ่งคือ GPIO04

void setup() {
  pinMode(bulb, OUTPUT);    // กำหนด bulb เป็นขา output
}

void loop() {
  digitalWrite(bulb, LOW);  // เขียนค่าดิจิทัลไปยังขา GPIO04 โดยไม่จ่ายไฟฟ้า
  delay(2000);              // รอ 2 วินาที
  digitalWrite(bulb, HIGH); // เขียนค่าดิจิทัลไปยังขา GPIO04 โดยจ่ายไฟ 3.3V
  delay(2000);              // รอ 2 วินาท
}
