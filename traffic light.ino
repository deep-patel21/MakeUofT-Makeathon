
int red = 10;
int yellow = 9;
int green = 8;

int delayGreen = 10000;
int delayYellow = 3000;
int delayRed = 10000;

void setup(){
  
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
  
}

void loop(){
  greenLight();
  delay(delayGreen);

  yellowLight();
  delay(delayYellow);

  redLight();
  delay(delayRed);
}

void greenLight() {
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
}

void yellowLight() {
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  digitalWrite(red, LOW);
}

void redLight() {
  digitalWrite(green, LOW);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
}






/*int red = 10;
int yellow = 9;
int green = 8;

void setup(){
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop(){
  changeLights();
  delay(15000);
}

void changeLights(){
  digitalWrite(green, HIGH);
  digitalWrite(yellow, LOW);
  delay(7000);

  digitalWrite(yellow,  HIGH);
  digitalWrite(red, LOW);
  delay(3000);

  digitalWrite(yellow, HIGH);
  delay(2000);

  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(3000);
}*/


/*void changeLights(){
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(300);

  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(500);

  digitalWrite(yellow, HIGH);
  delay(200);
  digitalWrite(yellow, LOW);
  digitalWrite(red, LOW);
  digitalWrite(green, HIGH);
  delay(300);
}*/