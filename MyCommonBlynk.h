#include <Time.h>
#include <TimeLib.h>
#include <WidgetRTC.h>


WidgetRTC widget_rtc;

BLYNK_CONNECTED() { 
  // Synchronize time on connection  
  widget_rtc.begin();
  setSyncInterval(60);
  delay(1000); //give rtc some time to syncup
}

// Digital clock display of the time
String getDateAndTime()
{
  // You can call hour(), minute(), ... at any time
  // Please see Time library examples for details
  char str[35];
  sprintf(str,"%02d/%02d/%02d %02d:%02d:%02d\0",day(),month(),year(),hour(),minute(),second());
  
  return String(str);

}