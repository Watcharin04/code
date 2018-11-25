void setup() {
  // ตั้งค่าสถานะพิน ให้เป็นโหมดส่งออก หมายเลขพิน ไม่ต้องใส่ IO 
  // เช่น IO12 ก็ใส่หมายเลข 12 ไปเลย
  pinMode(12, OUTPUT);    // IoT
}

void loop() {
  // ปิด LED

  digitalWrite(12,HIGH);
  delay(100);
  
  // เปิด LED
  digitalWrite(12,LOW);
  delay(300);
}
