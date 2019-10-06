#include <SoftwareSerial.h>
SoftwareSerial bluetooth(2, 3); // TX RX
int led;

void setup(){
  bluetooth.begin(9600);
  pinMode(7, OUTPUT);
}

void loop(){
  if (bluetooth.available() > 0){
    led = bluetooth.read();
    if (led == 'H'){
      digitalWrite(7, HIGH);
    }
    if (led == 'L'){
      digitalWrite(7, LOW);
    }
  }
}
