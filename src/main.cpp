/*
 * Copyright (c) 2014-2017 Cesanta Software Limited
 * All rights reserved
 */
#include "Adafruit_BMP085.h"

Adafruit_BMP085 bmp;

void setup(void) {
  if (!bmp.begin()) {
	   printf("Can't find a sensor\n");
	   while (true) delay(1000);
  }
}

void loop(void) {
  delay(2000);
  printf("Temperature: %.2f *C\n", bmp.readTemperature());
}
