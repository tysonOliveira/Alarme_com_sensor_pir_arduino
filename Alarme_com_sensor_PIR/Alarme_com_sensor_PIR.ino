   Alarm 
   
   Arduino
   Board: arduino uno
   Compilador: Arduino IDE 1.8.19

   Autor: Thaison Oliveira
   Data:  

#define set_pin 10
#define PIR 7 

int PIR = 7;
int trigger;

void setup() 
{
  pinMode(PIR, INPUT);
  pinMode(set_pin, OUTPUT);

}

void loop() 
{
  trigger = digitalRead(PIR);

  if(trigger == true)
  {
    for(frequency = 500; frequency <= 2800; frequency++)
    {
      tone(set_pin, frequency, 200);
      
      if(frequency == 2800)
      {
        for(; frequency > 100; frequency--)
        {
          tone(set_pin, frequency, 200);
          delay(0.8);    
        }
      }
      delay(0.8);
    }
  }
  else if(trigger == LOW)
  {
    noTone(set_pin);  
  }
}
