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