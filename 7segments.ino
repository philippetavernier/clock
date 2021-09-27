
int dp=13;
int a=12;
int b=11;
int c=10;
int d=9;
int e=8;
int f=7;
int g=6;
int timechange=8;
int ground_7_segment1=2;
int ground_7_segment2=3;

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(dp, OUTPUT);
  pinMode(a, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(c, OUTPUT);
  pinMode(d, OUTPUT);
  pinMode(e, OUTPUT);
  pinMode(f, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(ground_7_segment1, OUTPUT);
  pinMode(ground_7_segment2, OUTPUT);
  
}
void all_off()
{
  digitalWrite(a,LOW);
  digitalWrite(b,LOW);
  digitalWrite(c,LOW);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(timechange);
}

void zero_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,LOW);
  delay(timechange);
}
void un_on()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(timechange);
}

void deux_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,LOW);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(timechange);
}

void segment1_on()
{
 digitalWrite(ground_7_segment1, LOW);
 digitalWrite(ground_7_segment2, HIGH); 
}

void segment2_on()
{

 digitalWrite(ground_7_segment1, HIGH);
 digitalWrite(ground_7_segment2, LOW); 

}

void print_number( int unit)
{
  if (unit==2)
  {
    deux_on();            
    all_off();
  }
  if (unit==1)
  {
    un_on();            
    all_off();
  }
  if (unit==0)
  {
    zero_on();            
    all_off();
  }
}

void print_number_above10(int unit1, int unit2)
{
  segment1_on();
  print_number(unit1);
  segment2_on();
  print_number(unit2);
}

// the loop function runs over and over again forever
void loop() {
  print_number_above10(1,1);


}
