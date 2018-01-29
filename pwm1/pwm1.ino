void setup() {
  // put your setup code here, to run once:

  // board is arduino uno or adafruit pro trinket both of which
  // use ATmega328p
  // both have the same sets of pins exposed for digital PWM:
  // 6,5   - TCCR0B
  // 9,10  - TCCR1B
  // 11,3  - TCCR2B - timer/counter registers
  // TCCRxA - 
  pinMode(3, OUTPUT);
  pinMode(11, OUTPUT);
  TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);
  TCCR2B = _BV(CS22);
  OCR2A = 180;
  OCR2B = 50;
}

void loop() {
  // put your main code here, to run repeatedly:
  analogWrite(3,128); 
}
