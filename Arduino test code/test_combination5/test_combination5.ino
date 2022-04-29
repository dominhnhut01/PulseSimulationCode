int vent_in = 9;
int vent_out = 10;

void setup() {
  Serial.begin(9600);
  pinMode(vent_in, OUTPUT);
  pinMode(vent_out, OUTPUT);
}

void loop() {
  tone(vent_in, 200);
  delay(100);
  tone(vent_out, 200);
  delay(300);
  noTone(vent_out);
  noTone(vent_in);
  delay(100);
}
