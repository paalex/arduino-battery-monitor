//let potentiometer is connected at analog pin 4:
int analogPin = 0;
int val = 0;
//variable to store the value read

void setup () {
  Serial.begin (9600);
//Setup serial

}

void loop () {
  val = analogRead (analogPin);
  //Used to read the input pin
  Serial.println (val);
  delay(200);
}
