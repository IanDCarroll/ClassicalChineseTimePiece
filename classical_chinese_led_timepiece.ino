int one_miao = 144; // milliseconds in 1 miao
int one_fen = 100;  // miao in 1 fen

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop()
{
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delayOneFen();
  digitalWrite(9, LOW);
  digitalWrite(8, HIGH);
  delayOneFen();
}

void delayOneFen()
{
  int miao = 0;
  while(miao < one_fen / 2){
    blinkTwoMiao();
    miao++;
  }
}

void blinkTwoMiao()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(one_miao);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(one_miao);
}
