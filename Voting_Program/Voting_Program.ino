/*Voting Program*/

//Pin to which Touch Sensor is Attached
const int pinTouch = 6;

void setup()
{
    Serial.begin(9600);
    pinMode(pinTouch, INPUT);
    pinMode(pinLed, OUTPUT);
}


void loop()
{   
    int state = digitalRead(pinTouch);

    if (state == HIGH)
    {
      Serial.println ("Yes");
      YBuzz();
    }
    else  
    {
      Serial.println ("No");
      NBuzz();  
    }
    digitalWrite(pinLed, state);

    //while(!Serial.available()) ; 
   
}

void YBuzz()
{
  
//3 is the Pin to which Buzzer is Attached

  digitalWrite(3, HIGH);
  delay(analogRead(0));
  digitalWrite(3, LOW);
  delay(analogRead(0));
}

void NBuzz()
{
  digitalWrite(3, HIGH);
  delay(analogRead(0));
  digitalWrite(3, LOW);
  delay(analogRead(0));
  digitalWrite(3, HIGH);
  delay(analogRead(0));
  digitalWrite(3, LOW);
  delay(analogRead(0));
}
