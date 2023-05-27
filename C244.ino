#define PUSHBUTTON_PIN 12
#define LED_PIN 26
int button
void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PIN,OUTPUT);
  pinMode(PUSHBUTTON_PIN,INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  button=digitalRead(PUSHBUTTON_PIN);
  if(button == LOW){
    digitalWrite(LED_PIN, HIGH);
    delay(100)
  }
  else{
    digitalWrite(LED_PIN, LOW)
  }
  

}
