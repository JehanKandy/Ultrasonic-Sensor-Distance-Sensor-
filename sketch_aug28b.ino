//...............JehanKandy........................
//........www.jehankandy.com.......................
//........www.github.com/JehanKandy................

//....................Distance Sensor....................
//.....................Ultra Sonic.....................


//create Variables.....
int trig = 6; //Trig Pin as OUTPUT
int echo = 5; //Echo Pin as INPUT
long duration, distance;

void setup() {
  //Identify inputs, outputs and Serial Monitor
  pinMode(trig,OUTPUT); //OUTPUT
  pinMode(echo,INPUT);  //INPUT
  Serial.begin(9600); //for open the Serial Monitor, 966
}

void loop() {
  //send the original Signal -> trig signal
  digitalWrite(trig,HIGH);
  delayMicroseconds(2);
  digitalWrite(trig,LOW);
  delayMicroseconds(10);
  digitalWrite(trig,HIGH);

  //Receive the Signal -> echo signal

  duration = pulseIn(echo,HIGH);
  distance = (duration/2)*0.0346; // to create 'cm' value

  Serial.println(distance);
  Serial.print("cm");
}


//............coded by : JehanKandy....................
//................Thank You............................
