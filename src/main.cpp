#include <WiFi.h>
#include "time.h"
#include <Wire.h>
#include <string>
#include <settings.h>
#include <internet/wifi.h>
#include <internet/ntp.h>
#include "HT16K33.h"
HT16K33 seg(0x70);

void setup() {
  Serial.begin(115200);

  // begin WiFi connection
  initWiFi();
  Serial.print("RRSI: ");
  Serial.println(WiFi.RSSI());

  // init and get the time
  configTime(gmtOffset_sec, daylightOffset_sec, ntpServer);

  // 7 segment display init
  seg.begin();
  Wire.setClock(100000);
  seg.displayOn();
  seg.brightness(4);
  seg.setDigits(4);
}

void loop() {
  
  // show 12 hour time
  time_t curr_time;
  curr_time = time(NULL);
  tm *tm_local = localtime(&curr_time);
  if (tm_local->tm_hour > 12) tm_local->tm_hour = tm_local->tm_hour - 12;
  if (tm_local->tm_hour == 0) tm_local->tm_hour = 12;
  seg.displayTime(tm_local->tm_hour, tm_local->tm_min, true, false);
}
