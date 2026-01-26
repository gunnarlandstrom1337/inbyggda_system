// Variables
bool colorIsSet = false;

// PIN NO TOUCH
const int LED_RED = 11;
const int LED_BLUE = 10;
const int LED_GREEN = 9;

// RGB Values
unsigned int red = 137;
unsigned int green = 81;
unsigned int blue = 41;

// Function to change color
void changeColor(unsigned int red, unsigned int blue, unsigned int green)
{
  analogWrite(LED_RED, red);
  analogWrite(LED_BLUE, blue);
  analogWrite(LED_GREEN, green);
}
void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_BLUE, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
  changeColor(red,blue,green);
}

void loop()
{

}