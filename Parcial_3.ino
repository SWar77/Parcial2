void setup() {
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
pinMode(6, OUTPUT);
pinMode(7, OUTPUT);
pinMode(8, OUTPUT);
pinMode(9, OUTPUT);
pinMode(A0, INPUT);
}
void cambiarIntensidad(int intensidad) {
  analogWrite(2, intensidad);
  analogWrite(3, intensidad);
  analogWrite(4, intensidad);
  analogWrite(5, intensidad);
  analogWrite(6, intensidad);
  analogWrite(7, intensidad);
  analogWrite(8, intensidad);
  analogWrite(9, intensidad);
}
void loop() {
  int intensidad = analogRead(A0) / 4;
  cambiarIntensidad(intensidad);
}

