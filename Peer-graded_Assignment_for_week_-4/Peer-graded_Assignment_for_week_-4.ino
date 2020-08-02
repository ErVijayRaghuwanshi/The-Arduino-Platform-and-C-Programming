// Here I'm using NODE MCU ESP8266
// so my pin 13 is equal to 2

void setup() 
{
  pinMode(2, OUTPUT); // here I initialize the On-board led as OUTPUT
  Serial.begin(115200); // Here we start serial monitor
  while (!Serial);
  Serial.println("\nInput 1 to Turn LED on and 0 to off");
  digitalWrite(2, HIGH);
}

void loop()
{
  
  if (Serial.available())
  {
    int state = Serial.read();
    if (state == '1')
    {
     digitalWrite(2, LOW);
     Serial.println("Command completed LED turned ON");
    }
    if (state == '0')
    {
     digitalWrite(2, HIGH);
     Serial.println("Command completed LED turned OFF");
    }  
  }
}
