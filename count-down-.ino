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
void trois_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,HIGH);
  delay(timechange);
}
void quatre_on()
{
  digitalWrite(a,LOW);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(timechange);
}

void cinq_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(timechange);
}

void six_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,LOW);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(timechange);
}

void sept_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,LOW);
  digitalWrite(e,LOW);
  digitalWrite(f,LOW);
  digitalWrite(g,LOW);
  delay(timechange);
}

void huit_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,HIGH);
  digitalWrite(f,HIGH);
  digitalWrite(g,HIGH);
  delay(timechange);
}

void neuf_on()
{
  digitalWrite(a,HIGH);
  digitalWrite(b,HIGH);
  digitalWrite(c,HIGH);
  digitalWrite(d,HIGH);
  digitalWrite(e,LOW);
  digitalWrite(f,HIGH);
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
  if (unit==9)
  {
    neuf_on();            
    all_off();
  }
  
  if (unit==8)
  {
    huit_on();            
    all_off();
  }
  
  if (unit==7)
  {
    sept_on();            
    all_off();
  }
  
  if (unit==6)
  {
    six_on();            
    all_off();
  }
  
  if (unit==5)
  {
    cinq_on();            
    all_off();
  }
  if (unit==4)
  {
    quatre_on();            
    all_off();
  }
  if (unit==3)
  {
    trois_on();            
    all_off();
  }
  
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

int time_in_loop=0;
int time_max=2;
int i=0;
int j=0;
// the loop function runs over and over again forever
void loop() {

for (time_in_loop=0; time_in_loop <time_max; time_in_loop++)
{
  print_number_above10(i,j);
}
i=i+1;
if(i==10) 
{
  i=0;
  j=j+1;
  if(j==10) j=0;
}


}
