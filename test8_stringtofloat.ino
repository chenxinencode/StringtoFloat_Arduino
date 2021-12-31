String inData;                                                                          //Allocate some space for the string

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.println("Hello,Serial!");
}
void loop() {
  if(Serial.available() >0){
    inData ="";
    inData = Serial.readString();
    char char1[1];
    inData.toCharArray(char1, inData.length() +1);  
    float float1 = atof(char1);
    Serial.println(float1);
    
  }
    
     
}
