# Tutorial-5-Embedded-Systems-and-IoT


Objectives
1.	ใช้งาน if-else สร้างเงื่อนไขเพื่อสั่งการอุปกรณ์จากค่าที่ได้รับจากเซ็นเซอร์ได้
2.	ใช้งาน for loop สร้างเงื่อนไขเพื่อสั่งการอุปกรณ์จากค่าที่ได้รับจากเซ็นเซอร์ได้
3.	ใช้งาน while loop สร้างเงื่อนไขเพื่อสั่งการอุปกรณ์จากค่าที่ได้รับจากเซ็นเซอร์ได้

Hardware
1.	ultrasonic sensor   1	        
2.	LED		              x
3.	potentiometer	      9
5.  Resistor 330 ohms   1
4.	Breadboard          1
5.	Computer	          1
6.	microUSB	          1 

Software
1. Arduino IDE v
--------------------
Instruction

ไฟดาวน์ไลท์ควบคุมผ่านตัวต้านทานปรับค่าได้
1. ต่อขา GND, 3v3, และ GPIO04 เข้าขา GND, VCC, และ SIG ของ potentiometer ตามลำดับ
2. ต่อสายจากขา SIG ไปยังตัวต้านทาน
3. ต่อวงจร LED 1 ดวงจากตัวต้านทานและต่อขา GND ให้เรียบร้อย
4. ต่อสายสัญญาณจาก GPIO 36 ไปเชื่อมระหว่างตัวต้านทานและขา SIG
5. เขียนโปรแกรมจากไฟล์ DownLight.ino
