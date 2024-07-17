#include <SoftwareSerial.h>
#define led 2
SoftwareSerial bluetooth(3 , 4);

int dadosBluetooth = 0;
void setup() {
  // put your setup code here, to run once:
  bluetooth.begin(9600);
  bluetooth.print("conectando");
  bluetooth.print("conectanddo");
  pinMode(led , OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (bluetooth.available() > 0){
    dadosBluetooth = bluetooth.read();
  }

  if (dadosBluetooth == "a"){
    digitalWrite(led, true);
  }
  if(dadosBluetooth == "b"){
    digitalWrite(led, false);
  }
  Serial.print(bluetooth.available());
}
