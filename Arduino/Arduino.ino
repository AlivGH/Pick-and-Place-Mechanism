int motor1pin1 = 5;
int motor1pin2 = 4;



void setup() {
  // put your setup code here, to run once:
   pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);



  pinMode(9,   OUTPUT); 

}

void loop() {
   // put your main code here, to run repeatedly:

  //Controlling speed (0   = off and 255 = max speed):     

  analogWrite(9, 200); //ENA   pin


  
  digitalWrite(motor1pin1,   HIGH);
  digitalWrite(motor1pin2, LOW);


}
