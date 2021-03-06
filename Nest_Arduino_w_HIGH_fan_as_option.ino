#define ac_pin_low_PIN 3
#define ac_pin_high_PIN 4
#define fan_PIN 5
#define heat_PIN 6

#define AC_signal_genPIN 10
int fan;
int ac_low;
int ac_high;
int heat;
void setup() {
  delay(1000);
  // put your setup code here, to run once:
  pinMode(AC_signal_genPIN, OUTPUT);    // sets the digital pin 13 as output
  //digitalWrite(AC_signal_genPIN, LOW);
  
  pinMode(ac_pin_low_PIN, INPUT_PULLUP);
 //digitalWrite(ac_pin_low_PIN, LOW);

  pinMode(ac_pin_high_PIN, INPUT_PULLUP);
  //digitalWrite(ac_pin_high_PIN, LOW);  

  pinMode(fan_PIN, INPUT_PULLUP);
 // digitalWrite(fan_PIN, LOW);    
 
  pinMode(heat_PIN, INPUT_PULLUP);
  
  Serial.begin(9600);
 Serial.println("Starting up");
  
}

void loop() {

fan=digitalRead(fan_PIN);
delay(100);
ac_low=digitalRead(ac_pin_low_PIN);
delay(100);
ac_high=digitalRead(ac_pin_high_PIN);
delay(100);
heat=digitalRead(heat_PIN);
delay(100);


if(ac_low==LOW && ac_high==HIGH && heat==HIGH){
  AC_Turn_on_low_fan();
  Serial.println("The Ac is running on low fan");
  }

if(ac_low==LOW && ac_high==LOW && heat==HIGH){
  AC_Turn_on_high_fan();
  Serial.println("The ac is running on high fan");
  }

if(ac_low==HIGH && ac_high==HIGH && fan==LOW && heat==HIGH){
  //Serial.println("fan condition");
  fan_high();
  Serial.println("The high fan is on");
}

if(ac_low==HIGH && ac_high==HIGH && heat==LOW){
  //Serial.println("fan condition");
  heat_on();
  Serial.println("The heater is on");
}

if(ac_low==HIGH && ac_high==HIGH && fan==HIGH && heat==HIGH){
  digitalWrite(AC_signal_genPIN, LOW);
  Serial.println("Nothing is running");
  delay(2000);


  }

}

void AC_Turn_on_high_fan() {
  
  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(1000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second
  
  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(4000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(800);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(1000);            //3.6 waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 3.7
  delayMicroseconds(1000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second 3.8

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 3.9
  delayMicroseconds(2000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(789);            // waits for a second
  
  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 290.1
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 29.2
  delayMicroseconds(1000);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 290.3
  delayMicroseconds(3600); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 290.6
  delayMicroseconds(779);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 3.7
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second 290.75

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(1000); // waits for a second  290.8
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second 290.9

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(1500); // waits for a second 300
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second 300.1

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(788);            // waits for a second 300.2

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second 300.3
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 300.4
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // 300.5 waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(1000); // waits for a second 300.6
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 300.7
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(781);            // waits for a second 300.8

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second 300.9
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 310
  delayMicroseconds(1000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(1000);            // waits for a second 310.1

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(1000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second 310.3

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(795);    // 310.4       // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); //  300.5 waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(4000); // waits for a second 310.6
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 320
  delayMicroseconds(780);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(1500);            // waits for a second 320.2

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second 300.3
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(1000);            // waits for a second 300.4

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 300.5
  delayMicroseconds(1500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(1000);            // waits for a second 300.6

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on 300.7
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second 500

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second 300.8
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 330.2
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);  // 330.3          // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 330.8
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(1500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second 340.4
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 340.9
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 350
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 350.5
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off 350.6
  delayMicroseconds(500);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(5);            // waits for a second

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delayMicroseconds(2000);            // waits for a second 350.8

  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin AC_signal_genPIN on
  delayMicroseconds(500); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin AC_signal_genPIN off
  delay(175);            // waits for a second
}

void AC_Turn_on_low_fan() {
  // put your main code here, to run repeatedly:
  //Serial.println("The ac is starting on low fan");
  
  digitalWrite(AC_signal_genPIN, LOW); // sets the digital pin 13 on
  delayMicroseconds(1000); // waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);  // sets the digital pin 13 off
  delayMicroseconds(500);            // waits for half a second

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(4119);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(789);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1556);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(2000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(795);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(3607);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(795);
//77777777777777777777777777777777777777
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1555);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(800);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
//77777777777777777777777777777
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(789);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1520);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1042);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(866);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(4119);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(797);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
//777777777777777777777777777777777777777
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1555);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1555);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1044);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(506);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(513);
//////////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
/////////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(506);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(513);
//////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(543);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(518);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(518);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);
//777777777777777777777777777777777777777777
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);
/////////////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
////////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(513);
//////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1033);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(510);
  digitalWrite(AC_signal_genPIN, HIGH);
  delay(175);
  //Serial.print("..");

  //////////////////////End of ac fan low///////////////////////////
}

void fan_high() {
 
  digitalWrite(AC_signal_genPIN, LOW);// sets the digital pin 13 on
  delayMicroseconds(1041);// waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);// sets the digital pin 13 AC_signal_genPIN
  delayMicroseconds(500);// waits for half a second

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(4119);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(755);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(520);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);
  //
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(2000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(762);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(520);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1519);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(3000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(770);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(525);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(528);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1554);////////////////////*
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(750);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(525);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(528);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(529);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1043);///////////////*
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(755);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(527);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
  
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1554);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1042);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(763);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(528);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(4118);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(769);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(529);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1520);//////////////**********

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1555);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
////////////////////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
///7
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
  
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(2574);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);            

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);        

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
///////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(510);
///////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);//
////////////////////////////////////////////////////==
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delay(175);
}

void heat_on() {
  // put your main code here, to run repeatedly:
Serial.println("the heater loop is running");
  digitalWrite(AC_signal_genPIN, LOW);// sets the digital pin 13 on
  delayMicroseconds(1000);// waits for a second
  digitalWrite(AC_signal_genPIN, HIGH);// sets the digital pin 13 AC_signal_genPIN
  delayMicroseconds(500);// waits for half a second

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(4120);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(789);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(520);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
  
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  //

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(2000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(780);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(3090);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(793);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(528);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1550);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(778);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
  //
  
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(790);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(528);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(2068);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(780);

  //

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(4119);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(790);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(530);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(2068);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(1000);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);/////////////

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
//
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
///7
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
/////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
//7
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(2000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(1000);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
///
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);            
//////////******************
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);        

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
///////////////////////////////////****7
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
///////////////

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);//

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);
//7///////////////////////////////////////////////////////////////////////////////////
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);
/////////**********************
  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(500);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delayMicroseconds(5);

  digitalWrite(AC_signal_genPIN, LOW);
  delayMicroseconds(500);
  digitalWrite(AC_signal_genPIN, HIGH);
  delay(175);

  
}
