void setup() {
  // put your setup code here, to run once:
  pinMode(D3, OUTPUT);
  pinMode(D5, OUTPUT);
  pinMode(D6, OUTPUT);
}

int brightness = 0;
bool brighter = true;

void loop() {
 

  analogWrite(D3, brightness);
  analogWrite(D5, brightness);
  analogWrite(D6, brightness);
  if(brightness == 255){
    brighter = false;
  }
  if(brightness == 0){
    brighter = true;
  }
  if(brighter){
    brightness++;
    return;
  }
  brightness--;
}
