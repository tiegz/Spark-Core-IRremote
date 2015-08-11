/*
 * IRremote: IRsendDemo - demonstrates sending IR codes with IRsend
 * An IR LED must be connected to Arduino PWM pin 3.
 * Version 0.1 July, 2009
 * Copyright 2009 Ken Shirriff
 * http://arcfn.com
 */

#include <IRremote.h>

IRsend irsend(A0);

void setup()
{
  Serial.begin(115200);
}

void loop() {
  Serial.println("Writing to spark core ir led");
  irsend.sendRaw(0xF7C03F, 6, 38);
  delay(2000);
}