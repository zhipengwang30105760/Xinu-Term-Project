
int mic_ready_LED_1 = 4;//#1
int mic_ready_LED_2 = 3;
int mic_ready_LED_3 = 2;
int mic_ready_LED_4 = 5;

int touch_1 = A0;//#1
int touch_2 = A1;
int touch_3 = A2;
int touch_4 = A3;
int numberOfLoop = 0;

void setup(){
Serial.begin(57600);
pinMode(touch_1, INPUT);
pinMode(touch_2, INPUT);
pinMode(touch_3, INPUT);
pinMode(touch_4, INPUT);

pinMode(mic_ready_LED_1, OUTPUT);
pinMode(mic_ready_LED_2, OUTPUT);
pinMode(mic_ready_LED_3, OUTPUT);
pinMode(mic_ready_LED_4, OUTPUT);

}

void loop(){

int touch_input_1 = digitalRead(touch_1);
int touch_input_2 = digitalRead(touch_2);
int touch_input_3 = digitalRead(touch_3);
int touch_input_4 = digitalRead(touch_4);


if(touch_input_1 == LOW && touch_input_2 == LOW && touch_input_3 == LOW && touch_input_4 == LOW){
  digitalWrite(mic_ready_LED_1, LOW);
  digitalWrite(mic_ready_LED_2, LOW);
  digitalWrite(mic_ready_LED_3, LOW);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == LOW && touch_input_2 == LOW && touch_input_3 == LOW && touch_input_4 == HIGH){
    digitalWrite(mic_ready_LED_1, LOW);
  digitalWrite(mic_ready_LED_2, LOW);
  digitalWrite(mic_ready_LED_3, LOW);
  delay(3000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
else if(touch_input_1 == LOW && touch_input_2 == LOW && touch_input_3 == HIGH && touch_input_4 == LOW){
    digitalWrite(mic_ready_LED_1, LOW);
  digitalWrite(mic_ready_LED_2, LOW);
  delay(3000);
  digitalWrite(mic_ready_LED_3, HIGH);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == LOW && touch_input_2 == LOW && touch_input_3 == HIGH && touch_input_4 == HIGH){
   digitalWrite(mic_ready_LED_1, LOW);
  digitalWrite(mic_ready_LED_2, LOW);
  delay(3000);
  digitalWrite(mic_ready_LED_3, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
else if(touch_input_1 == LOW && touch_input_2 == HIGH && touch_input_3 == LOW && touch_input_4 == LOW){
    digitalWrite(mic_ready_LED_1, LOW);
    delay(3000);
  digitalWrite(mic_ready_LED_2, HIGH);
  digitalWrite(mic_ready_LED_3, LOW);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == LOW && touch_input_2 == HIGH && touch_input_3 == LOW && touch_input_4 == HIGH){
    digitalWrite(mic_ready_LED_1, LOW);
    delay(3000);
  digitalWrite(mic_ready_LED_2, HIGH);
  digitalWrite(mic_ready_LED_3, LOW);
  delay(5000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
else if(touch_input_1 == LOW && touch_input_2 == HIGH && touch_input_3 == HIGH && touch_input_4 == LOW){
    digitalWrite(mic_ready_LED_1, LOW);
    delay(3000);
  digitalWrite(mic_ready_LED_2, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_3, HIGH);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == LOW && touch_input_2 == HIGH && touch_input_3 == HIGH && touch_input_4 == HIGH){
    digitalWrite(mic_ready_LED_1, LOW);
    delay(3000);
  digitalWrite(mic_ready_LED_2, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_3, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
else if(touch_input_1 == HIGH && touch_input_2 == LOW && touch_input_3 == LOW && touch_input_4 == LOW){
  delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
  digitalWrite(mic_ready_LED_2, LOW);
  digitalWrite(mic_ready_LED_3, LOW);
  digitalWrite(mic_ready_LED_4, LOW);
}

else if(touch_input_1 == HIGH && touch_input_2 == LOW && touch_input_3 == LOW && touch_input_4 == HIGH){
  delay(3000);
  digitalWrite(mic_ready_LED_4, HIGH);
  digitalWrite(mic_ready_LED_2, LOW);
  digitalWrite(mic_ready_LED_3, LOW);
  delay(5000);
  digitalWrite(mic_ready_LED_1, HIGH);
}
else if(touch_input_1 == HIGH && touch_input_2 == LOW && touch_input_3 == HIGH && touch_input_4 == LOW){
    delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
  digitalWrite(mic_ready_LED_2, LOW);
  delay(5000);
  digitalWrite(mic_ready_LED_3, HIGH);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == HIGH && touch_input_2 == LOW && touch_input_3 == HIGH && touch_input_4 == HIGH){
    delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
  digitalWrite(mic_ready_LED_2, LOW);
  delay(5000);
  digitalWrite(mic_ready_LED_3, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
else if(touch_input_1 == HIGH && touch_input_2 == HIGH && touch_input_3 == LOW && touch_input_4 == LOW){
    delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
    delay(5000);
  digitalWrite(mic_ready_LED_2, HIGH);
  digitalWrite(mic_ready_LED_3, LOW);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == HIGH && touch_input_2 == HIGH && touch_input_3 == LOW && touch_input_4 == HIGH){
   delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
    delay(5000);
  digitalWrite(mic_ready_LED_2, HIGH);
  digitalWrite(mic_ready_LED_3, LOW);
  delay(5000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
else if(touch_input_1 == HIGH && touch_input_2 == HIGH && touch_input_3 == HIGH && touch_input_4 == LOW){
    delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
    delay(5000);
  digitalWrite(mic_ready_LED_2, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_3, HIGH);
  digitalWrite(mic_ready_LED_4, LOW);
}
else if(touch_input_1 == HIGH && touch_input_2 == HIGH && touch_input_3 == HIGH && touch_input_4 == HIGH){
    delay(3000);
    digitalWrite(mic_ready_LED_1, HIGH);
    delay(5000);
  digitalWrite(mic_ready_LED_2, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_3, HIGH);
  delay(5000);
  digitalWrite(mic_ready_LED_4, HIGH);
}
 









delay(5000);
}
