#include "arduino.h"

typedef struct _colour24 {
  uint8_t r;
  uint8_t g;
  uint8_t b;
} rgb24_t;

rgb24_t colours[13] =  //Can be up to 256 long
{ {0,0,0},
  {255, 255, 255},
  {255, 0, 0},
  {0, 255, 0},
  {0, 0, 255},
  {255, 255, 0},
  {255, 0, 170},
  {0, 255, 255},
  {255, 70, 0},
  {120, 0, 255},
  {0, 255, 80},
  {150, 255, 20},
  {140, 20, 230}};

uint8_t robots[50] = {0};



typedef struct _radio_message {
  uint8_t     hdr0;
  uint8_t     hdr1;
  uint8_t     robotID;
  uint8_t     type;
  uint8_t     d1;
  uint8_t     d2;
  uint8_t     d3;
  uint8_t     d4;
  uint8_t     seqno;
  uint8_t     crc;
  uint8_t     nextByte;
  int         mode;
} radio_message_t;



void setColour(rgb24_t rgbcolour, float brightness); 
