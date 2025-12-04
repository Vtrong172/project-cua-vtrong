void setup()
{
  for(int i = 0; i < 12; i++){
  	pinMode(i, OUTPUT);
  }
}

void displayOnClock(int num)
{
  if(num <= 12){
   	digitalWrite(num-1, HIGH);
      }
}
void clearClock(){
	  	for (int i = 0; i<=11; i++)
      digitalWrite(i, LOW);
}
int second = 0;

void loop(){
  clearClock();
  
  second++;
  if (second==60) {second=0;minute++;}
  
  int divS = second/5;
  if (divS==0) displayOnClock(12);
  else displayOnClock(divS);
  delay(1000);
}