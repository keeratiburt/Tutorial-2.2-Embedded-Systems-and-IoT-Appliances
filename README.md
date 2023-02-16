# Tutorial-5-Embedded-Systems-and-IoT


Objectives
1.	ใช้งาน if-else สร้างเงื่อนไขเพื่อสั่งการอุปกรณ์จากค่าที่ได้รับจากเซ็นเซอร์ได้
2.	ใช้งาน for loop สร้างเงื่อนไขเพื่อสั่งการอุปกรณ์จากค่าที่ได้รับจากเซ็นเซอร์ได้
3.	ใช้งาน while loop สร้างเงื่อนไขเพื่อสั่งการอุปกรณ์จากค่าที่ได้รับจากเซ็นเซอร์ได้

Hardware
1.	ultrasonic sensor   1	        
2.	LED		              x
3.	potentiometer	      1
4.  Relay 2CH           1
5.  Resistor 330 ohms   1
4.	Breadboard          1
5.	Computer	          1
6.	microUSB	          1 

Software
1. Arduino IDE v
--------------------
Instruction

T 5.1 ไฟดาวน์ไลท์ควบคุมผ่านตัวต้านทานปรับค่าได้
1. ที่ตัว potentiometer ต่อขา GND และ VCC เข้าขา GND และ GPIO 04 ของ ESP32 ตามลำดับ
2. ที่ตัว potentiometer ต่อขา SIG ไปยังขาหนึ่งของตัวต้านทาน
3. ต่อวงจร LED 1 ดวงจากตัวต้านทานและต่อขา GND ให้เรียบร้อย
4. ต่อสายสัญญาณจาก GPIO 36 ไปเชื่อมระหว่างตัวต้านทานและขา SIG
5. เขียนโปรแกรมจากไฟล์ DownLight.ino
6. ทดสอบโปรแกรมโดยปรับระดับที่ตัวหมุนของ potentiometer
--------------------

T 5.2 การใช้งาน Relay ควบคุมเครื่องใช้ไฟฟ้าภายในบ้าน
1. ต่อขา GND, 3v3, และ GPIO04 เข้าขา GND, VCC, และ SIG ของ potentiometer ตามลำดับ
2. ต่อสายจากขา SIG ไปยังตัวต้านทาน
3. ต่อวงจร LED 1 ดวงจากตัวต้านทานและต่อขา GND ให้เรียบร้อย
4. ต่อสายสัญญาณจาก GPIO 36 ไปเชื่อมระหว่างตัวต้านทานและขา SIG
5. เขียนโปรแกรมจากไฟล์ DownLight.ino


![relay-esp32-wiring](https://user-images.githubusercontent.com/125423996/219270742-3a012498-10bc-4e7e-9985-c47089516265.jpg)
[ภาพจาก randomnerdtutorials.com]






--------------------
Potentiometer

เป็นอุปกรณ์อิเล็กทรอนิกส์ประเภทหนึ่ง มีหลายลักษณะการทำงานและการใช้งาน โดยหนึ่งในนั้นจะเป็นแบบที่หมุนได้ทำหน้าที่เป็นตัวต้านทานที่สามารถปรับค่าได้ส่งผลให้ได้ค่าความต้านทานที่ต้องการ

![what-is-potentiometer_3](https://user-images.githubusercontent.com/125423996/219269830-60df34ee-ca69-4e41-8c50-99788d37e086.jpg)
[ภาพจาก riverglennapts.com]



