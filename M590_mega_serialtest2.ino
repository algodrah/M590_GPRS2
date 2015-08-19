// original sketch: http://shin-ajaran.blogspot.ro/2014/12/noobs-guide-to-esp8266-with-arduino.html
// rewrite after phote by niq_ro from http://nicuflorica.blogspot.com/
// and http://arduinotehniq.blogspot.com/
// and http://www.tehnic.go.ro
// rewrite for M590 GPRS module by niq_ro - 13.08.2015, Craiova - Romania, Europe, Earth

void setup() {
  // initialize both serial ports:
  Serial.begin(115200);
//  Serial2.begin(115200);   // initial for control M590 at 115200bps
Serial2.begin(9600);        // after change baud rate at 9600bps with AT commnad: AT+IPR=9600
}

void loop() {
 while(Serial2.available()) Serial.write(Serial2.read());
 
while(Serial.available()) Serial2.write(Serial.read());
}
