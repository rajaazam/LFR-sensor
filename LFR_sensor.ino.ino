int leftsensor=2;
int rightsensor=3;
int leftforward=4;
int rightforward=5;
int leftbackward=6;
int rightbackward=7;
void setup() {
  // put your setup code here, to run once:
pinMode (leftsensor,INPUT);
pinMode (rightsensor,INPUT);
pinMode (leftforward,OUTPUT);
pinMode (rightforward,OUTPUT);
pinMode (leftbackward,OUTPUT);
pinMode (rightbackward,OUTPUT);


}

void loop() {
if(digitalRead(leftsensor>500) && digitalRead(rightsensor>500)){
  digitalWrite(leftforward,255);
  digitalWrite(rightforward,255);
}
else if(digitalRead(leftsensor>500) && digitalRead(rightsensor<500)){
  digitalWrite(leftforward,0);
  digitalWrite(rightforward,255);
}
else if(digitalRead(leftsensor<500) && digitalRead(rightsensor>500)){
  digitalWrite(leftforward,255);
  digitalWrite(rightforward,0);
}
else{
  digitalWrite(leftforward,0);
  digitalWrite(rightforward,0);
}
}
