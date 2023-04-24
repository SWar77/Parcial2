int estadoButton1 = 0;
  int pushbutton1 = 10;
void setup() {
  
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(pushbutton1, INPUT);
  Serial.begin(9600);
  Serial.println("Presiona el numero 2 para encender las leds");
}

void loop() {

  for (int i=1;  i<10;i++){
    digitalWrite(i, HIGH);
    delay(0);
  }
  estadoButton1 = digitalRead(pushbutton1);
  if(estadoButton1== HIGH)
  {
for (int i=1;  i<10;i++){
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
}
    for (int i=10;  i>1;i--){
    digitalWrite(i, HIGH);
    delay(200);
    digitalWrite(i, LOW);
    }
}
else{
  for (int i=1;  i<10;i++){
    digitalWrite(i, LOW);
    delay(0);
  }
}
if(Serial.available()>0 ){
char letra=Serial.read();
  if (letra=='2'){
    for (int i=0;  i<10;i++){
    digitalWrite(i, HIGH);
    delay(20);
    digitalWrite(i, LOW);
    delay(20);
}
for (int i=0;  i<10;i++){
    digitalWrite(i, HIGH);
    delay(20);
    digitalWrite(i, LOW);
    delay(20);
}
}
}
}

