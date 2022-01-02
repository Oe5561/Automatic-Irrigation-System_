int rolePin = 2;
int humidityPin = A0;

int humidityvalue;
int humiditythresholdvalue = 15;

//Toprak nem değeri yüzde 15'in altına düştüğünde su pompası çalışmaya başlayacak



void setup()
{
  pinMode(rolePin, OUTPUT);
  pinMode(humidityPin, INPUT);
  Serial.begin(9600);
}

void loop()
{
  humidityvalue = map(analogRead(humidityPin),1023,0,0,100);
  Serial.print("Humidity Value: %");
  Serial.println(humidityvalue);

  if(humidityvalue > humiditythresholdvalue)
  {
    digitalWrite(rolePin, HIGH);
  }
  else
  {
    digitalWrite(rolePin, LOW);
  }
  
  delay(100);
}
