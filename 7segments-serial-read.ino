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
int digit1;
int digit2;

const int max_string_length = 100;
char inData[max_string_length]; 
const char end_char = '\n';


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
  Serial.begin(9600);
  Serial.println("Begin!"); 
}

void receive_string(){
  int i = 0;
  
  char c = read_char();
  while(c != end_char){
    if(i >= max_string_length)
       break;
       
    inData[i] = c; 
    i++;
    c = read_char();
  }
  inData[i] = '\0';
}

char read_char(){
  while(!Serial.available())
{
    digit1=inData[1];
    digit2=inData[0];
    Serial.println(digit1);
    Serial.println(digit2);
    print_number_above10(digit1,digit2);
}
  
  return Serial.read();
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
  if (unit==57)
  {
    neuf_on();            
    all_off();
  }
  
  if (unit==56)
  {
    huit_on();            
    all_off();
  }
  
  if (unit==55)
  {
    sept_on();            
    all_off();
  }
  
  if (unit==54)
  {
    six_on();            
    all_off();
  }
  
  if (unit==53)
  {
    cinq_on();            
    all_off();
  }
  if (unit==52)
  {
    quatre_on();            
    all_off();
  }
  if (unit==51)
  {
    trois_on();            
    all_off();
  }
  
  if (unit==50)
  {
    deux_on();            
    all_off();
  }
  if (unit==49)
  {
    un_on();            
    all_off();
  }
  if (unit==48)
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


    receive_string();
    Serial.print("String received: ");
    Serial.println(inData);


}
