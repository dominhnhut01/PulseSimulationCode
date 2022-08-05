int vent_in = 9;
int vent_out = 10;

void setup() {
  Serial.begin(9600);
  pinMode(vent_in, OUTPUT);
  pinMode(vent_out, OUTPUT);
}

void loop() {
  digitalWrite(vent_in, HIGH);
  delay(150);
  digitalWrite(vent_in,LOW);
  delay(200);
  digitalWrite(vent_out, HIGH);
  delay(200);
  digitalWrite(vent_out, LOW);
  delay(200);
}
