int incoming_data{0};

void setup()
{
  pinMode(6, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  while(Serial.available())
  {
    incoming_data = Serial.read();
    if (incoming_data == '1')
    {
      digitalWrite(6, HIGH);
    }
    if (incoming_data == '0')
    {
      digitalWrite(6, LOW);
    }
  }
}
