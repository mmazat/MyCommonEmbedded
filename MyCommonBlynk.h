#include <TimeLib.h>
#include <WidgetRTC.h>


WidgetRTC widget_rtc;
// Digital clock display of the time
String getDateAndTime()
{
  // You can call hour(), minute(), ... at any time
  // Please see Time library examples for details
  char str[35];
  sprintf(str,"%02d/%02d/%02d %02d:%02d:%02d\0",year(),month(),day(), hour(),minute(),seconds());
  
  return String(str);

}