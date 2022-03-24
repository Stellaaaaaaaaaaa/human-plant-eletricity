int realy = 10;
int val;
int sensorpin = 9;

void setup() {
 pinMode (led,OUTPUT);
 pinMode (sensorpin,INPUT); 
 
} 

void loop() {
 val= digitalRead(sensorpin);
 if (val==HIGH) {
  digitalWrite (led, HIGH);
 } else {
  digitalWrite (led, LOW);
 }
}
