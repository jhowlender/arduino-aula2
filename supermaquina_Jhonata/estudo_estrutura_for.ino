/**
 * estudo do laço for
 * @author Jhonata Reis
 */



void setup() {
  Serial.begin(9600);
  int valor=5;
  for (int i=0; i<=10; i++){
   Serial.print(valor);
   Serial.print(" x ");
   Serial.print(i);
   Serial.print(" = ");
   Serial.println(valor * i);
   }
}

void loop() {
  // put your main code here, to run repeatedly:

}
