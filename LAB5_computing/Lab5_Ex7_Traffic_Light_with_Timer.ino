const int RED = 8;
const int YELLOW = 9;
const int GREEN = 10;

const int DELAY_RED = 5;
const int DELAY_YELLOW = 2;
const int DELAY_GREEN = 3;

const int a = 2;
const int b = 3;
const int c = 6;
const int d = 5;
const int e = 4;
const int f = 1;
const int g = 0;

const bool digitMap[10][7] = {
  {0, 0, 0, 0, 0, 0, 1}, 
  {1, 0, 0, 1, 1, 1, 1}, 
  {0, 0, 1, 0, 0, 1, 0}, 
  {0, 0, 0, 0, 1, 1, 0}, 
  {1, 0, 0, 1, 1, 0, 0}, 
  {0, 1, 0, 0, 1, 0, 0}, 
  {0, 1, 0, 0, 0, 0, 0}, 
  {0, 0, 0, 1, 1, 1, 1}, 
  {0, 0, 0, 0, 0, 0, 0}, 
  {0, 0, 0, 1, 1, 0, 0}  
};

const int segmentPins[7] = {a, b, c, d, e, f, g};

void setup() {
  
  pinMode(RED, OUTPUT);
  pinMode(YELLOW, OUTPUT);
  pinMode(GREEN, OUTPUT);

  for (int i = 0; i < 7; i++) {
    pinMode(segmentPins[i], OUTPUT);
  }
  
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void loop() {
  
  for (int i = DELAY_RED - 1 ; i >= 0; i--) {
    red_light();
    display(i);
    delay(1000);
  }

  for (int i = DELAY_YELLOW - 1; i >= 0; i--) {
   yellow_light();
    display(i);
    delay(1000);
  }

  for (int i = DELAY_GREEN - 1; i >= 0; i--) {
   green_light();
   display(i);
   delay(1000);
  }
}
void red_light() {
  digitalWrite(RED, HIGH);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, LOW);
}

void yellow_light() {
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, HIGH);
  digitalWrite(GREEN, LOW);
}

void green_light() {
  digitalWrite(RED, LOW);
  digitalWrite(YELLOW, LOW);
  digitalWrite(GREEN, HIGH);
}

void display(int num) {
  if (num < 0 || num > 9) {
    clearDisplay();
    return;
  }
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], digitMap[num][i] ? HIGH : LOW);
  }
}

void clearDisplay() {
  for (int i = 0; i < 7; i++) {
    digitalWrite(segmentPins[i], LOW);
  }
}