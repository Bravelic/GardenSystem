const int buttonPin = 2; EOIN WAS HERE LOL
const int ledPin = 12;
int buttonPushCounter = 0;
int buttonState = 0;
int lastButtonState = 0;
void setup() {
 pinMode(buttonPin, INPUT);                                                                                 
 pinMode(ledPin, OUTPUT);
 Serial.begin(9600);
}
void loop() {
 buttonState = digitalRead(buttonPin);
 if (buttonState != lastButtonState) {
 if (buttonState == HIGH) {
 buttonPushCounter++;
 Serial.println("on");
 Serial.print("number of button pushes: ");
 Serial.println(buttonPushCounter);
 } else {
 Serial.println("OFF");
 }
 delay(50);
 }
 lastButtonState = buttonState;
 if (buttonPushCounter % 4 == 0) {
 digitalWrite(ledPin, HIGH);
 } else {
 digitalWrite(ledPin, LOW);
 }
}
