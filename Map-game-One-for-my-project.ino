//Declaring my variables  
//Map Game section Input Section.
//These numbers are countries. All the countries would be set to false to start with
//Declaring my variables  
//Map Game section Input Section.
const bool GreenLED = 6;
//These numbers are countries. All the countries would be set to false to start with
//Link 1 from canada to Plymouth 
int Link1 = 2;
//link 2 from french guana to South Africa
int Link2 = true;
//Link 3 Ivory Coast to Saudi Arabia 
int Link3 = 8;
//link 4 Australia to Portugal
//Link5 
int Link5 = true;
int Link4 = true;
const bool  ledPin = false;
const bool buttonPin = false;
////
//green LED On state;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(1, OUTPUT);
  pinMode(6, OUTPUT);
}
void loop(){
// put your main code here, to run repeatedly:
//  Change instead of puting 5 if statments do this if city1,city2,city3,city4,cit5 and then output as answer correct else wrong on another line.

 //Canada and Plymouth
if (Link1){
  Serial.print("Answer is correct ");
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(8000);

}
//Portugal and pakistan 
if (Link2){
  Serial.print("Answer is correct");
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(4000);                       // wait for a second
}

//India to Australia
if (Link3){
  Serial.print("Answer is correct");
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(4000);      
 
}
//French guana to ivory Coast:
if (Link5){
  Serial.print("Answer is correct");
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  delay(4000);                       // wait for a second
  digitalWrite(3, HIGH);    // turn the LED off by making the voltage LOW
  delay(4000);    // wait for a second

}
//Part where it would light up green if students get countries correct. LED would light up green
//if user selects Canada vancuva port, india,  then Green light would fliker.

if(Link1){
  digitalWrite(HIGH);
}
else{
  digitalWrite(LOW);
  delay(2000);
}
//there would be a magnet where students can
//button

//Code for that goes here:
