int binaryOperator = 0;
int binaryInterval = 1000;
unsigned int milliCounter = 0;
bool buttonPressed = false;
bool reverseCount = false;
bool buttonCooldown = true;
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
  unsigned long currentMillis = millis();
  buttonPressed = digitalRead(binaryButton);

  if (buttonPressed && buttonCooldown) {
    buttonCooldown = false;
    if (!reverseCount) {
      reverseCount = true;
    } else if (reverseCount) {
      reverseCount = false;
    }
  }
  if (currentMillis - milliCounter >= binaryInterval) {
    milliCounter = currentMillis;


    // Counter 1-15 in binary LED's
    switch (binaryOperator) {
      case 0:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, LOW);
        if (reverseCount) {
          binaryOperator = 16;
        }
        break;
      case 1:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, LOW);
        break;
      case 2:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, LOW);
        break;
      case 3:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, LOW);
        break;
      case 4:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, LOW);
        break;
      case 5:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, LOW);
        break;
      case 6:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, LOW);
        break;
      case 7:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, LOW);
        break;
      case 8:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, HIGH);
        break;
      case 9:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, HIGH);
        break;
      case 10:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, HIGH);
        break;
      case 11:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, LOW);
        digitalWrite(binaryFour, HIGH);
        break;
      case 12:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, HIGH);
        break;
      case 13:
        digitalWrite(binaryOne, HIGH);
        digitalWrite(binaryTwo, LOW);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, HIGH);
        break;
      case 14:
        digitalWrite(binaryOne, LOW);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryFour, HIGH);
        break;
      case 15:
        digitalWrite(binaryFour, HIGH);
        digitalWrite(binaryThree, HIGH);
        digitalWrite(binaryTwo, HIGH);
        digitalWrite(binaryOne, HIGH);
        if (!reverseCount) {
          binaryOperator = -1;
        }
        break;
    }
    buttonCooldown = true;
    if (reverseCount) {
      binaryOperator--;
    } else if (!reverseCount) {
      binaryOperator++;
    }
    if (binaryOperator > 16) {
      binaryOperator = 0;
    } else if (binaryOperator < 0) {
      binaryOperator = 16;
    }
  }
}
