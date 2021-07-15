#include <FlexCAN_T4.h>

FlexCAN_T4FD<CAN3, RX_SIZE_256, TX_SIZE_16> FD;

void setup(void) {
  Serial.begin(115200); delay(500);
  pinMode(6, OUTPUT); digitalWrite(6, LOW);
  FD.begin();
  FD.setRegions(64);
  //    FD.setMB(MB6, RX);
  //    FD.setMB(MB11, RX);
  //    FD.setMB(MB22, RX);
  //    FD.setMB(MB31, RX);
  //      FD.setMB(MB45, TX);
}

void loop() {
  CANFD_message_t msg;
  msg.len = 8; msg.id = 0x321;
  msg.buf[0] = 1; msg.buf[1] = 2; msg.buf[2] = 3; msg.buf[3] = 4;
  msg.buf[4] = 5; msg.buf[5] = 6; msg.buf[6] = 7; msg.buf[7] = 8;
  FD.write(msg);
  if ( FD.read(msg) ) {
    Serial.print("MB: "); Serial.print(msg.mb);
    Serial.print("  ID: 0x"); Serial.print(msg.id, HEX );
    Serial.print("  EXT: "); Serial.print(msg.flags.extended );
    Serial.print("  LEN: "); Serial.print(msg.len);
    Serial.print(" DATA: ");
    for ( uint8_t i = 0; i < 8; i++ ) {
      Serial.print(msg.buf[i]); Serial.print(" ");
    }
    Serial.print("  TS: "); Serial.println(msg.timestamp);
  }
  delay(50);
}
