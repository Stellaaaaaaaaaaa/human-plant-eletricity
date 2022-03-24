int relay = 10;
int val;
int sensorpin = 8;

void setup() {
 pinMode (relay,OUTPUT);
 pinMode (sensorpin,INPUT); 
  Serial.begin(9600);
  } 

void loop() {
 val= digitalRead(sensorpin);
    Serial.println(val);
    if (val==HIGH) {
  digitalWrite (relay, HIGH);
  delay(500);
 } else {
  digitalWrite (relay, LOW);
 }
}
