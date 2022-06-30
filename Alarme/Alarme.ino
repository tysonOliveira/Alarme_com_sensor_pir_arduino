int frequency = 0; 
int pir = 7;
int trigger;

void setup() 
{
  pinMode(pir, INPUT);
  pinMode(10, OUTPUT);
  
}

void loop() 
{
  trigger = digitalRead(pir);
  
  if(trigger == true )
  {
    for (frequency = 500; frequency <= 2000; frequency++)
    {
      tone(10, frequency, 200); 
      
      /*if (frequency == 2800)
      {
      
        for (; frequency > 100; frequency--)
        {
          tone(10, frequency, 200);
          delay(0.8);
        }
      }*/
      delay(0.8);
    }  
  }
  else if(trigger == LOW)
  {
    noTone(10);
  }
}
