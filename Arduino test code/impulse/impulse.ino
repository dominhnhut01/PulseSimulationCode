int vent_in = 10;
int vent_out = 9;

void setup() {
  Serial.begin(9600);
  pinMode(vent_in, OUTPUT);
  pinMode(vent_out, OUTPUT);
}

void loop() {
  digitalWrite(vent_in, HIGH);
  delay(5);
  digitalWrite(vent_in, LOW);
//  delay(50);
  digitalWrite(vent_out, LOW);
  delay(50);
  digitalWrite(vent_out, HIGH);
  delay(150);
}
