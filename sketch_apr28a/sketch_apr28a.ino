

const int green = 13;
const int yellow = 11;
const int red = 10;
const int buzz = 8;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);
  if (sensorValue>120){
    pinMode(green,OUTPUT);
    digitalWrite(green,HIGH);
    delay(50);

    pinMode(yellow,OUTPUT);
    digitalWrite(yellow,HIGH);
    delay(50);

    pinMode(red,OUTPUT);
    digitalWrite(red,HIGH);
    delay(50);

    tone(buzz,500,50);
    delay(10);
  }else{
    digitalWrite(green, LOW);
    digitalWrite(yellow, LOW);
    digitalWrite(red, LOW);
  }
  Serial.println(sensorValue);
  delay(5);

}
