  char bi;//(bluetooth input)
  int in1pin=6;
  int in2pin=7;
  int in3pin=8;
  int in4pin=9;
  int powerpin=13;
  int lightpin=10;
  void setup() {
    Serial.begin(9600);
    pinMode(in1pin,OUTPUT);
    pinMode(in2pin,OUTPUT);
    pinMode(in3pin,OUTPUT);
    pinMode(in4pin,OUTPUT);
    pinMode(powerpin,OUTPUT);
    pinMode(lightpin,OUTPUT);
    //outputs
    }
  
  void loop() {
    digitalWrite(powerpin,HIGH);
    wait=wait+1;
    if(Serial.available()>0){//if bluetooth data is sent
      bi=Serial.read();
      Serial.println(bi);
      if(bi=='F'){//forward
        digitalWrite(in1pin,LOW);
        digitalWrite(in2pin,HIGH);
        digitalWrite(in3pin,LOW);
        digitalWrite(in4pin,HIGH);
        delay(20);
        //directional Values
        }
      else if(bi=='B'){//backwards
        digitalWrite(in1pin,HIGH);
        digitalWrite(in2pin,LOW);
        digitalWrite(in3pin,HIGH);
        digitalWrite(in4pin,LOW);
        delay(20);
        //directional values
      }
      else if(bi=='R'){//right
        digitalWrite(in1pin,LOW);
        digitalWrite(in2pin,HIGH);
        digitalWrite(in3pin,LOW);
        digitalWrite(in4pin,LOW);
        delay(20);
        //directional values
      }
      else if(bi=='L'){//left
        digitalWrite(in1pin,LOW);
        digitalWrite(in2pin,LOW);
        digitalWrite(in3pin,LOW);
        digitalWrite(in4pin,HIGH);
        delay(20);
        //directional values
    }
    else if(bi=='K'){//light on
        digitalWrite(lightpin,HIGH);
    }
    else if(bi=='J'){//light off
        digitalWrite(lightpin,LOW);
    }
    }
    else{//Stop
        digitalWrite(in1pin,LOW);
        digitalWrite(in2pin,LOW);
        digitalWrite(in3pin,LOW);
        digitalWrite(in4pin,LOW);
        delay(20);
      
    }
  }
  
