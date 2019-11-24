const int trigPin = 12;
const int echoPin = 13;
const int trigPin1 = 18;
const int echoPin1 = 19;
const int trigPin2 = 25;
const int echoPin2 = 26;
const int trigPin3 = 33;
const int echoPin3 = 32;

long duration;
long distance;
long sensor1;
long sensor2;
long sensor3;
long sensor4;

void setup() {
  //Initiate serial monitor
  Serial.begin (9600);

  //Specifies the pins behavior 
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
   pinMode(trigPin1, OUTPUT);
  pinMode(echoPin1, INPUT);
  pinMode(trigPin2, OUTPUT);
  pinMode(echoPin2, INPUT);
   pinMode(trigPin3, OUTPUT);
  pinMode(echoPin3, INPUT);
   
}

void loop() {
 Sensor(trigPin,echoPin);
 sensor1=distance;
 Sensor(trigPin1,echoPin1);
 sensor2=distance;
  Sensor(trigPin,echoPin);
 sensor3=distance;
 Sensor(trigPin1,echoPin1);
 sensor4=distance;
 Serial.print(sensor1);
 Serial.print("-");
 Serial.print(sensor2);
  Serial.print("-");
  Serial.print(sensor3);
 Serial.print("-");
 Serial.print(sensor4);
 Serial.println(" ");
 
}
void Sensor(int trigPin,int echoPin)
{
    digitalWrite(trigPin, LOW);
 delayMicroseconds(5);
  digitalWrite(trigPin, HIGH);
   delayMicroseconds(10);
  digitalWrite(trigPin, LOW) ;
  
  //Reads the echoPin and the time it 
  //took for the HIGH pulse to return
  duration = pulseIn(echoPin, HIGH);
 

  //Calculating the distance in cm
  distance = (duration/2) / 29.1;
 
  
delay(200);
  }
