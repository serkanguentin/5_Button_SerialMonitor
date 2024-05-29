#define  button 8
#define  button2 2
int counter=0;

void setup() {
pinMode(button,INPUT); 
pinMode(button2,INPUT); 
Serial.begin(9600);


}

void loop() {

if(digitalRead(button)==1)
{
  counter++;
  Serial.println(counter);
  while(digitalRead(button)==1){
    delay(1);
  }
}
else if(digitalRead(button2)==1)
{
  counter--;
  Serial.println(counter);
  while(digitalRead(button2)==1){
    delay(1);
  }
}
}
