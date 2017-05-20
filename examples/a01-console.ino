// Easiest Analog Console test program
// By Jeremy Ellis

// lots of sensors have these labels 
// GND    Ground
// VCC     Normal 5Vin check board may want 3V3
// NC      Not Connected - might be label LED 
// Sig      Connect to A0 

void setup() {

}


void loop() {
  Particle.publish("Analog Read A0 = ", String(analogRead(A0), DEC), 60, PRIVATE);  
  delay(6000); // wait about 6 seconds

}


