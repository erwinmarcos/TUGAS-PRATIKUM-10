float a=4;
float b=6;
float c=8;
float degree, degreeB, degreeC;
void setup() 
{
  Serial.begin(9600);
  Serial.print("Panjang sisi A Segitiga = ");
  Serial.println (a);
  Serial.print("Panjang sisi B Segitiga = ");
  Serial.println (b);
  Serial.print("Panjang sisi C Segitiga = ");
  Serial.println (c);
  Serial.print( "Derajaat a=" );
  degree = acos((b*b + c*c - a*a) / (2*b*c))*(180/3.14159);
  degreeB = acos((a*a + c*c - b*b) / (2*a*c))*(180/3.14159);
  degreeC = 180 - degree - degreeB;
  Serial.print (" Angle A = "); Serial.println(degree);
  Serial.print (" Angle B = "); Serial.println(degreeB);
  Serial.print (" Angle C = "); Serial.println(degreeC);
}
void loop()
{
}

