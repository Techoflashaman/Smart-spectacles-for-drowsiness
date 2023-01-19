/*
embed
https://embed.org.in
*/

#define SENSE A0
void setup()
{
pinMode(SENSE, INPUT);
pinMode(2, OUTPUT);
pinMode(LED_BUILTIN, OUTPUT);
}
void loop()
{
if(digitalRead(SENSE))
{
digitalWrite(LED_BUILTIN, LOW);
pinMode(2, LOW);
}
else
{
delay (3000);
if(digitalRead(SENSE))
{
digitalWrite(LED_BUILTIN, LOW);
pinMode(2, LOW);
}
else
digitalWrite(LED_BUILTIN, HIGH);
pinMode(2, HIGH);
}
}