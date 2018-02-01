void setup() {
  // put your setup code here, to run once:

  // board is arduino uno or adafruit pro trinket both of which
  // use ATmega328p
  // both have the same sets of pins exposed for digital PWM:
  // 6,5   - TCCR0A/B - Timer 0
  // 9,10  - TCCR1A/B - Timer 1
  // 11,3  - TCCR2A/B - Timer 2 timer/counter registers
  // TCCRxA - 
  pinMode(3, OUTPUT);
  //pinMode(11, OUTPUT);
  //TCCR2A = _BV(COM2A1) | _BV(COM2B1) | _BV(WGM21) | _BV(WGM20);
  // TCCR2B = TCCR2B & B11111000 | B00000001; // no prescaler - too fast for motor
  TCCR2B = TCCR2B & B11111000 | B00000100; // clk/64          - seems best for motor T = 2.03 sec measured on Scope with Arduino Uno
  //TCCR2B = TCCR2B & B11111000 | B00000011; // clk/32       - motor works but buzzes at 3.3 V
  //TCCR2B = TCCR2B & B11111000 | B00000010; // clk/8         - too fast for motor
  //TCCR2B = _BV(CS22);
  //OCR2A = 180;
  OCR2B = 50;
}

void loop() {
  // put your main code here, to run repeatedly:
  // empirically, driving the motor I have
  //for (int ii = 256; ii>=0; ii -= 32) {
  //  delay(1000);
   // analogWrite(3,ii); 
   //analogWrite(3,128+64); 
   analogWrite(3,128); 
   //delay(1000);
   //TCCR2B = TCCR2B & B11111000 | B00000100; // clk/64
   //analogWrite(3,128); 
   //delay(1000);
   //TCCR2B = TCCR2B & B11111000 | B00000011; // clk/32
  //}
  
}
