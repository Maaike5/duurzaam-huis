
int A, B, C, D;
bool D3, D5, D6;

void setup() {
  Serial.begin(9600);
  pinMode(3, OUTPUT); // D3
  pinMode(5, OUTPUT); // D5
  pinMode(6, OUTPUT); // D6
}

void loop() {
  A = random(999);
  B = random(999);
  C = random(999);
  D = random(999);
  
  Serial.print("A: ");
  Serial.print(A);
  Serial.print(", B: ");
  Serial.print(B);
  Serial.print(", C: ");
  Serial.print(C);
  Serial.print(", D: ");
  Serial.println(D);
  
  if (A > B || A < C) {
    D3 = true;
  } else {
    D3 = false;
  }
  
  if (C > A && A < B) {
    D5 = true;
  } else {
    D5 = false;
  }
  
  if (B > C && B > A && C < A) {
    D6 = true;
  } else {
    D6 = false;
  }
  
  if (D > A && D > B && D > C) {
    blinkAllLeds();
  } else {
    digitalWrite(3, D3);
    digitalWrite(5, D5);
    digitalWrite(6, D6);
    delay(10000);
  }
}

void blinkAllLeds() {
  for (int i = 0; i < 5; i++) {
    digitalWrite(3, HIGH);
    digitalWrite(5, HIGH);
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(3, LOW);
    digitalWrite(5, LOW);
    digitalWrite(6, LOW);
    delay(500);
  }
}
