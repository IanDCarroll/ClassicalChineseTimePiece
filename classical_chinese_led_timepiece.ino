int one_miao = 144;
int one_fen = 14400;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
}

void loop()
{
  int miao = 0;
  while(miao < 100){
    miaoLoop();
    miao++;
  }
}

void miaoLoop()
{
  digitalWrite(13, HIGH);
  digitalWrite(12, LOW);
  delay(one_miao);
  digitalWrite(13, LOW);
  digitalWrite(12, HIGH);
  delay(one_miao);
}
