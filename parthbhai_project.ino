#include "radio.h"
#include "si4455_api_lib.h"
#include "si4455_patch.h"
#include "radio_comm.h"
#include "radio_config.h"
#include "si4455_nirq.h"
#include "SPI.h"

char buff [50];

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  pinMode(MISO, OUTPUT);
  pinMode(ss, OUTPUT);
  SPI.begin ();
  SPI.setClockDivider(SPI_CLOCK_DIV8);
  SPI.attachInterrupt();
  
  tRadio::PowerUp()
  delay(1000)
  tRadio::Initialize()
  
}

void loop() {
  // put your main code here, to run repeatedly:
  tRadio::StartRX
  
  tSi4455_Hal::SpiReadByte()
  Serial.println(buff);
}
