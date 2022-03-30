// C++ code
//
int red1=13;
int yellow1=3;
int green1=2;
int red2=1;
int yellow2=11;
int green2=12;
void setup()
{
  pinMode(red1, OUTPUT);
  pinMode(yellow1, OUTPUT);
  pinMode(green1, OUTPUT);
  pinMode(red2, OUTPUT);
  pinMode(yellow2, OUTPUT);
  pinMode(green2, OUTPUT);
}

void loop()
{
  digitalWrite(red1, HIGH);
  digitalWrite(green2, HIGH);
  delay(9000);
  digitalWrite(red1, LOW);
  digitalWrite(green2, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(1500);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
  digitalWrite(red2, HIGH);
  digitalWrite(green1, HIGH);
  delay(9000);
  digitalWrite(red2, LOW);
  digitalWrite(green1, LOW);
  digitalWrite(yellow1, HIGH);
  digitalWrite(yellow2, HIGH);
  delay(1500);
  digitalWrite(yellow1, LOW);
  digitalWrite(yellow2, LOW);
}