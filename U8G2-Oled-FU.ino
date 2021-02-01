#include <U8g2lib.h>
U8G2_SSD1306_128X64_NONAME_F_HW_I2C u8g2(U8G2_R0, /* reset=*/ U8X8_PIN_NONE);//定义屏幕
#define fu_x 128
#define fu_y 64
static const unsigned char fu[] U8X8_PROGMEM = {
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03,0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0x00,0x00,0xF0,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x00,0xF0,0xFF,0xFF,0xFF,0x3F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x03,0xC0,0xFF,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0F,0xC0,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0x00,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xFF,0x03,0x00,0xFC,0xFF,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xFC,0x0F,0x00,0x00,0x00,0xFC,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0x03,0xFF,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x3F,0xF0,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x0F,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x30,0xFC,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x03,0x3C,0xFC,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x0F,0x0F,0xFC,0x3F,0xC0,0xFF,0x03,0x00,0x00,0x00,
0x00,0x00,0x00,0xC0,0xFF,0xFF,0xCF,0x0F,0xFC,0x0F,0xF0,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0xFF,0xFF,0x03,0xFC,0x0F,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0x00,0xC0,0xFF,0xFF,0xFF,0xFF,0x03,0xF0,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x00,0xFC,0xFC,0xFF,0xFF,0xFF,0xFF,0x00,0xF0,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x00,
0x00,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xC0,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0xFF,0x0F,0xFF,0x3F,0x00,0xC0,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,
0x00,0xC0,0xFF,0xFF,0xC3,0xFF,0x3F,0x00,0xF0,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFF,0xC0,0xFF,0x0F,0x00,0x3F,0x0F,0x00,0xFF,0xFF,0x03,0x00,0x00,
0x00,0x00,0xFC,0x0F,0xC0,0xFF,0x03,0xC0,0x00,0x00,0xFF,0xFF,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0xFF,0x03,0x0C,0x00,0xFC,0xFF,0xFF,0xFF,0xFF,0x03,0x00,
0x00,0x00,0x00,0x00,0xF0,0xFF,0x00,0x0C,0xC0,0xFF,0xFF,0xFF,0xFF,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0x00,0x3C,0xF0,0xFF,0xFF,0x00,0xC0,0xFF,0x0F,0x00,
0x00,0x00,0x00,0xC0,0xFF,0x3F,0x00,0xFC,0xFC,0xFF,0xFF,0x00,0xC0,0xFF,0x0F,0x00,0x00,0x00,0x00,0xF0,0xFF,0x0F,0x00,0xFC,0xFF,0x00,0xFF,0x03,0xC0,0xFF,0x03,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x0F,0x00,0xF0,0x0F,0x00,0xFF,0x3F,0xC0,0xFF,0x03,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0F,0x00,0xF0,0x0F,0xF0,0xFF,0x3F,0xC0,0xFF,0x03,0x00,
0x00,0x00,0xC0,0xFF,0xFF,0x0F,0x00,0xF0,0x0F,0xFF,0xFF,0x3F,0xC0,0xFF,0x03,0x00,0x00,0x00,0x00,0xFF,0xFF,0x0F,0x00,0xF0,0x0F,0xFF,0xFF,0x3F,0xF0,0xFF,0x03,0x00,
0x00,0x00,0x00,0xFF,0xFF,0x0F,0x00,0xF0,0x0F,0xFF,0xFF,0x03,0xF0,0xFF,0x00,0x00,0x00,0x00,0x00,0xFF,0xF3,0x0F,0x00,0xF0,0x0F,0xC0,0xFF,0x00,0xF0,0xFF,0x00,0x00,
0x00,0x00,0x00,0xFC,0xF0,0x0F,0x00,0xC0,0x0F,0xC0,0xFF,0x00,0xF0,0xFF,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x0F,0x00,0xC0,0x3F,0xFC,0xFF,0x03,0xFC,0x3F,0x00,0x00,
0x00,0x00,0x00,0x00,0xC0,0x0F,0x00,0xC0,0xFF,0xFF,0xFF,0x3F,0xFF,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x0F,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,0x00,0xF0,0x3F,0x00,0xFF,0xFF,0x03,0x00,0x00,
0x00,0x00,0x00,0x00,0xF0,0x3F,0x00,0x00,0x00,0x00,0x00,0xFC,0xFF,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x3F,0x00,0x00,0x00,0x00,0x00,0xF0,0xFF,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
/* (128 X 64 )黑底福*/
};

void setup() {
    u8g2.begin();
    u8g2.enableUTF8Print();
    Serial.begin(115200);
}

void loop() {
   u8g2.clearBuffer();//清除屏幕缓冲区
   u8g2.setFont(u8g2_font_ncenB14_tr);
   u8g2.drawXBMP(0,0, fu_x, fu_y, fu);
   u8g2.sendBuffer();//发送到屏幕缓冲区
   delay(100);
}
