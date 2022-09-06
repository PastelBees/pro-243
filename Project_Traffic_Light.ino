int delay_ms = 200; 
int arr_pin[3]={25,26,27};
int i, j;

void setup() {
  for (int i=0; i<3; i++) {
    pinMode(arr_pin[i], OUTPUT);
  }
  delay(200);
}

void loop() {
   for (i=0; i<3; i++) {
    digitalWrite(arr_pin[i], HIGH);
    delay(delay_ms);
    digitalWrite(arr_pin[i], LOW);
  }
   for (j=2; j>=0; j--) {
    digitalWrite(arr_pin[j], HIGH);
    delay(delay_ms);
    digitalWrite(arr_pin[j], LOW);
  }
}
