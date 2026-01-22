int binaryOperator = 0;
bool buttonPressed = false;
bool countUp = false;
const int binaryOne = 13;
const int binaryTwo = 12;
const int binaryThree = 11;
const int binaryFour = 10;
const int binaryButton = 7;
void setup() {
 
pinMode(binaryOne, OUTPUT);
pinMode(binaryTwo, OUTPUT);
pinMode(binaryThree, OUTPUT);
pinMode(binaryFour, OUTPUT);
pinMode(binaryButton, INPUT);

}

void loop() {
  
 buttonPressed = digitalRead(binaryButton);
 if (buttonPressed){
  countUp = true;
   delay(200);
 }
  if(countUp){
  	binaryOperator++;
    countUp = false;
    delay(200);
  }
  
  // Counter 1-15 in binary LED's
  switch (binaryOperator){
    case 0:
      break;
    case 1:
      digitalWrite(binaryOne, HIGH);
      break;
    case 2:
      digitalWrite(binaryOne, LOW);
      digitalWrite(binaryTwo, HIGH);
      break;
    case 3:
      digitalWrite(binaryOne, HIGH);
      break;
    case 4:
      digitalWrite(binaryOne, LOW);
      digitalWrite(binaryTwo, LOW);
      digitalWrite(binaryThree, HIGH);
      break;
    case 5:
      digitalWrite(binaryOne, HIGH);
      break;
    case 6:
      digitalWrite(binaryOne, LOW);
      digitalWrite(binaryTwo, HIGH);
      break;
    case 7:
      digitalWrite(binaryOne, HIGH);
      break;
    case 8:
      digitalWrite(binaryOne, LOW);
      digitalWrite(binaryTwo, LOW);
      digitalWrite(binaryThree, LOW);
      digitalWrite(binaryFour, HIGH);
      break;
    case 9:
      digitalWrite(binaryOne, HIGH);
      break;
    case 10:
      digitalWrite(binaryOne, LOW);
      digitalWrite(binaryTwo, HIGH);
      break;
    case 11:
      digitalWrite(binaryOne, HIGH);
      break;
    case 12:
    	digitalWrite(binaryOne, LOW);
    	digitalWrite(binaryTwo, LOW);
    	digitalWrite(binaryThree, HIGH);
    	break;
    case 13:
    	digitalWrite(binaryOne, HIGH);
    	break;
    case 14:
    	digitalWrite(binaryOne, LOW);
    	digitalWrite(binaryTwo, HIGH);
    	break;
    case 15:
    	digitalWrite(binaryOne, HIGH);
    	break;
    case 16:
     	digitalWrite(binaryFour, LOW);
     	digitalWrite(binaryThree, LOW);
     	digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryOne, LOW);
    	binaryOperator = 0;
    	break;
  }
}
