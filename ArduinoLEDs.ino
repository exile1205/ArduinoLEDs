const byte leds[] ={8,9,10,11,12};
const byte total = sizeof(leds);
byte index = 0;

void setup(){
  for(byte i = 0;i<total; i++){
    pinMode(leds[i],OUTPUT);
  }
}
void loop(){
   for(byte i = 0;i<total; i++){
      digitalWrite(leds[i],LOW);
    }
  digitalWrite(leds[index],HIGH);
  if(index<total){
    index++;
  }else{
     index =0;
  }
  delay(100);
}
