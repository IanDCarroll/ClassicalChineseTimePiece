const int one_miao = 144; // milliseconds in 1 miao
const int one_fen = 100;  // miao in 1 fen
const int one_ke = 60;    // fen in 1 ke

const int miaoLED1 = 13;
const int miaoLED2 = 12;
const int fenLED1 = 9;
const int fenLED2 = 8;
const int keLED1 = 5;
const int keLED2 = 4;

void setup()
{
  pinMode(keLED1, OUTPUT);
  pinMode(keLED2, OUTPUT);
  pinMode(fenLED1, OUTPUT);
  pinMode(fenLED2, OUTPUT);
  pinMode(miaoLED1, OUTPUT);
  pinMode(miaoLED2, OUTPUT);
}

void loop()
{
  digitalWrite(keLED1, HIGH);
  digitalWrite(keLED2, LOW);
  delayOneKe();
  digitalWrite(keLED1, LOW);
  digitalWrite(keLED2, HIGH);
  delayOneKe();
}

void delayOneKe()
{
  int fen = 0;
  while(fen < one_ke){
    blinkTwoFen();
    fen += 2;
  }
}

void blinkTwoFen()
{
  digitalWrite(fenLED1, HIGH);
  digitalWrite(fenLED2, LOW);
  delayOneFen();
  digitalWrite(fenLED1, LOW);
  digitalWrite(fenLED2, HIGH);
  delayOneFen();
}

void delayOneFen()
{
  int miao = 0;
  while(miao < one_fen){
    blinkTwoMiao();
    miao += 2;
  }
}

void blinkTwoMiao()
{
  digitalWrite(miaoLED1, HIGH);
  digitalWrite(miaoLED2, LOW);
  delay(one_miao);
  digitalWrite(miaoLED1, LOW);
  digitalWrite(miaoLED2, HIGH);
  delay(one_miao);
}
