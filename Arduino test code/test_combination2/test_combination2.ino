int vent_in = 9;
int vent_out = 10;

void setup() {
  Serial.begin(9600);
  pinMode(vent_in, OUTPUT);
  pinMode(vent_out, OUTPUT);
}

void loop() {
  tone(vent_in, 100);
  delay(200);
  noTone(vent_in);
  digitalWrite(vent_out, HIGH);
  delay(400);
  digitalWrite(vent_out, LOW);
}
