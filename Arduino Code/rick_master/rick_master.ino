#include <Servo.h>

// pin assignments
#define FRH_pin    23
#define FRK_pin    24
#define FLH_pin    26
#define FLK_pin    27

#define BRH_pin    29
#define BRK_pin    30
#define BLH_pin    32
#define BLK_pin    33

#define head_pin   22
#define neck_pin   25
#define tail_pin   31

// bluetooth
char c;
String voice = "";

// servos
Servo FRH, FRK, FLH, FLK, BRH, BRK, BLH, BLK;
Servo head, neck, tail;

boolean t = false;

void sit() {
  FRH.write(45);
  FRK.write(180);
  FLH.write(135);
  FLK.write(0);

  BRH.write(135);
  BRK.write(120);
  BLH.write(45);
  BLK.write(90);
}

void straight() {
  FRH.write(45);
  FRK.write(180);
  FLH.write(135);
  FLK.write(0);
  
  BRH.write(135);
  BRK.write(180);
  BLH.write(45);
  BLK.write(0);
}

void up() {
  BRK.write(180);
  BLK.write(0);
  delay(500);
  BRH.write(135);
  BLH.write(45);

  delay(500);
  
  FRK.write(180);
  FLK.write(0);
  delay(500);
  FRH.write(45);
  FLH.write(135);
}

void vow() {
  FRH.write(70);
  FLH.write(110);
  delay(500);
  FRK.write(125);
  FLK.write(55);
}

void walk(int steps) {
  up();
  delay(300);
  
  for (int i = 0; i < steps; i++) {
    /* first part of walk */
    delay(300);
    /* second part of walk */
    delay(300);
  }
}

void down() {
  BRH.write(135);
  BRK.write(120);
  BLH.write(45);
  BLK.write(80);
  
  delay(500);
  
  FRH.write(45);
  FRK.write(120);
  FLH.write(135);
  FLK.write(80);
}


void setup() {
  FRH.attach(FRH_pin);
  FRK.attach(FRK_pin);
  FLH.attach(FLH_pin);
  FLK.attach(FLK_pin);

  BRH.attach(BRH_pin);
  BRK.attach(BRK_pin);
  BLH.attach(BLH_pin);
  BLK.attach(BLK_pin);

  Serial.begin(9600);

  straight();
}

void loop() {
  while (Serial.available()) {
    delay(10);
    c = Serial.read();

    if (c == '#') break;
    voice += c;
  }

  // if loop executes if a word was sent to the dog
  if (voice.length() > 0) {
    Serial.println(voice);

    if (voice == "sit") {
      sit();
    } else if (voice == "up" || voice == "stand") {
      up();
    } else if (voice == "bow" || voice == "vow") {
      vow();
    } else if (voice == "straight") {
      straight();
    } else if (voice == "down") {
      down();
    } else if (voice == "walk") {
      // walk(10);
    }

    delay(2000);
    voice = "";
  }
}
