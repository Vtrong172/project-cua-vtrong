int ledPins[] = {2,3,4,5,6,7,8,9};
const int numLeds = 8;

void setup(){
  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
}

void loop(){
   animation_1();
   animation_2();
   animation_3();
   animation_4();
   animation_5();
   animation_6();
   animation_7();
   animation_8();
   animation_9();
   animation_10();
}

//đèn sáng dần từ 2-9
void animation_1() {
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
  }
}

//đèn tắt dần từ 2-9
void animation_2() {
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
    delay(1000);
  }
}
//đèn sáng dần từ 9-2
void animation_3() {
  for (int i = numLeds - 1; i >= 0; --i) {
    digitalWrite(ledPins[i], HIGH);
    delay(1000);
  }
}
  
//đèn tắt dần từ 9-2
void animation_4() {
  for (int i = numLeds - 1; i >= 0; --i) {
    digitalWrite(ledPins[i], LOW);
    delay(1000);
  }
}

//toggle 4 đèn đầu và 4 đèn sau
void animation_5() {
  for (int i = 0; i < numLeds; ++i) {
    if (i < 4) {
      digitalWrite(ledPins[i], HIGH);
    }
    else {
      digitalWrite(ledPins[i],LOW);
    }
  }
  delay(1000);
  
  for (int i = 0; i < numLeds; ++i) {
    if (i < 4) {
      digitalWrite(ledPins[i], LOW);
    }
    else {
      digitalWrite(ledPins[i],HIGH);
    }
  }
  delay(1000);
  
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}
  
//toggle đèn chẵn lẻ
void animation_6() {
  for (int i = 0; i < numLeds; ++i){
    if (i % 2 == 0) {
      digitalWrite(ledPins[i], HIGH);
    }
    else {
      digitalWrite(ledPins[i], LOW);
    }
  }
    delay(1000);
  
  for (int i = 0; i < numLeds; ++i){
    if (i % 2 == 0) {
      digitalWrite(ledPins[i], LOW);
    }
    else {
      digitalWrite(ledPins[i], HIGH);
    }
  }
    delay(1000);
  
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}

//đèn đơn sáng dần từ 2-9
void animation_7() {
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
    delay(500);
  }
  
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}
  
//đèn đơn sáng dần từ 9-2
void animation_8() {
  for (int i = numLeds - 1; i >= 0; --i) {
    digitalWrite(ledPins[i], HIGH);
    delay(500);
    digitalWrite(ledPins[i], LOW);
    delay(500);
  } 
  
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
}

//đèn sáng từ trung tâm ra
void animation_9() {
    int center_left = numLeds/2 - 1;
    int center_right = numLeds/2; 
    for (int i = 0; i < numLeds/2; ++i) {
      digitalWrite(ledPins[center_left - i], HIGH);
      digitalWrite(ledPins[center_right + i], HIGH);
      delay(200);
    }
                           
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);
 }
  
//đèn sáng từ ngoài vào trung tâm
void animation_10() {
    int a = 0;
    int b = numLeds - 1;
    for (int i = 0; i < numLeds/2; ++i) {
        digitalWrite(ledPins[a + i], HIGH);
        digitalWrite(ledPins[b - i], HIGH);
        delay(200);
    }
                             
  for (int i = 0; i < numLeds; ++i) {
    digitalWrite(ledPins[i], LOW);
  }
  delay(500);  
}