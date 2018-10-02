 float pi = 3.141592653;
 float diamater;
 float height;
void setup() {
  // put your setup code here, to run once:

Serial.begin(9600);



}

void loop() {
 
volumecalc();
  
}
float volumecalc(){
  Serial.println("give height");
 while(Serial.available()==0){
  
  }
  height = Serial.parseInt();
  
  Serial.println("give diameter");
 while(Serial.available()==0){
  
  }
  diamater = Serial.parseInt();

  Serial.print("height ");                   
  Serial.println(height);
  Serial.print("diameter ");
  Serial.println(diamater);
 
 float volume = pi*(diamater/2)*(diamater/2)*height;
 Serial.print("volume = ");
  Serial.print(volume);
  Serial.println("==========   new calc =============");
  }
