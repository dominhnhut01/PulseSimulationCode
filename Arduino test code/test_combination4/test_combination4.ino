int vent_in = 9;
int vent_out = 10;

void setup() {
  Serial.begin(9600);
  pinMode(vent_in, OUTPUT);
  pinMode(vent_out, OUTPUT);
}

void loop() {
  digitalWrite(vent_in, HIGH);
  delay(400);
  digitalWrite(vent_in, LOW);
  tone(vent_out, 100);
  delay(800);
  noTone(vent_out);
}
