int second = 0;
int minute = 0;
int hour = 12;
int timeScale = 1;
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

void loop()
{
  clearClock();
  
  second++;
  if (second==60) {second=0;minute++;}
  
  int divS = second/5;
  if (divS==0) displayOnClock(12);
  else displayOnClock(divS);
  
  displayOnClock(hour);
  if (minute==60) 
  {
    minute=0;hour++;
    displayOnClock(hour);
    if (hour>12) hour=1;
  }
  int divM = minute/5;
  if (divM==0) displayOnClock(12);
  else displayOnClock(divM);
  delay(1000/timeScale);
}