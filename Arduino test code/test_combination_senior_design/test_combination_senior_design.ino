

int pushButton1 = 7;  // 'Pressure_In' Button
int pushButton2 = 8;  // 'Vent' Button
int analogPin = A3;   // Pressure Sensor Read
int pressureMeasure = 0;
int pressureDiff = 0;
int pressureCons = 80; //mmHg
int sample_rate = 1; //0.001 s
int sensorValue = 0;
int freq1 = 350; //Hz
int freq2 = 320; //Hz
int t = 0;


// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  // make the pushbutton's pin an input:
  pinMode(pushButton1, INPUT_PULLUP);
  pinMode(pushButton2, INPUT_PULLUP);
//  tone(10, freq2); //initial release
//  delay(1000); //initial release
//  noTone(10); //initial release
}

// the loop routine runs over and over again forever:
void loop() 
{
  // read the pressure sensor analog input, and Prin
  pressureMeasure = analogRead(analogPin);  // read the input pin
 Serial.println(0.343078*pressureMeasure-29.0678);          // debug value in mmHg

  pressureDiff = pressureCons - 0.343078*pressureMeasure-29.0678;
noTone(10);
noTone(9);

  if(t < 60) {
      tone(9, 320); 
      delay(2);
      t++;
      t++;
      noTone(10);
      }

    else if(t < 180) {
      tone(9, 345);
      delay(2);
      t++;
      t++;
      noTone(9);
      }    

     else if(t < 230) {
      noTone(10);
      delay(2);
      t++;
      t++;
      noTone(9);
      } 

     else if(t < 290) {
      tone(10, 340);
      delay(2);
      t++;
      t++;
      noTone(9);
      }  
      
    else if(t < 400) {
      tone(10, freq2);
      tone(9, int(freq2 * 1.75));
      delay(2);
      t++;
      t++;
      noTone(9);
      }    

     else if(t < 450) {
      tone(9, 350); 
      delay(2);
      t++;
      t++;
      noTone(10);
      }    

     else if(t < 470) {
      tone(9, 370); 
      delay(2);
      t++;
      t++;
      noTone(10);
      }   

    else if(t < 620) {
      tone(10, freq2);
      delay(2);
      t++;
      t++;
      noTone(9);
      }    
      
    else {
      noTone(9);
      noTone(10);
      }

  
  // read the input pin:
  int buttonState1 = digitalRead(pushButton1);
  int buttonState2 = digitalRead(pushButton2);

  if(buttonState1 == 0) {
    tone(9, freq1);
  }
  else {
    noTone(9);
  }
  if(buttonState2 == 0){
    tone(10, freq2);
  }
  else {
    noTone(10);
  }
    
  delay(sample_rate);        // delay in between reads for stability
  t++;
  
  if(t>620) {
    t=0;
  }
}
