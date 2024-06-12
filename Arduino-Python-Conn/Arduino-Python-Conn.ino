void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  String str,tmp;
  while(Serial.available() > 0){
    char c =  Serial.read();
    if (c != '\n') str += c;
    // str += Serial.read();
    // str.trim();
    // str += Serial.readStringUntil('\n'); //문자열 입력
    delay(10);
  }
  if(str.length() > 0 ){
    // str[str.length() - 1 ] = ']';
    // str[str.length()] = NULL;
    
    String sOutput = '[' + str + ']';
    Serial.println(sOutput);
  }
}
