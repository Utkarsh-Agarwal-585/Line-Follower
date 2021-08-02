
int m1a=9;
int m1b=10;
int m2a=11;
int m2b=12;
int ir1=2;
int ir2=3;
int val1;
int val2;

void setup()
{
  pinMode(ir1,INPUT);
  pinMode(ir2,INPUT);
  pinMode(m1a,OUTPUT);
  pinMode(m1b,OUTPUT);
  pinMode(m2a,OUTPUT);
  pinMode(m2b,OUTPUT);
  
}

void loop()
{
  
    val1=digitalRead(ir1);
    val2=digitalRead(ir2);
 
  if(val1== 1 && val2== 1)
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
  }
  
  else if(val1== 0 && val2== 1)
  
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,HIGH);
    digitalWrite(m2b,LOW);
  }
  else if(val1== 1 && val2== 0)
  {
    digitalWrite(m1a,HIGH);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
  }
  else if(val1== 0 && val2== 0)
  {
    digitalWrite(m1a,LOW);
    digitalWrite(m1b,LOW);
    digitalWrite(m2a,LOW);
    digitalWrite(m2b,LOW);
  }
  
}

  
  
