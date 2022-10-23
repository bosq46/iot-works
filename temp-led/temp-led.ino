const int LED_PIN0 = 4;
const int LED_PIN1 = 5;
const int LED_PIN2 = 6;
const int TEMP_PIN0 = 0;  // A0
const int TEMP_PIN1 = 1;  // A1

void setup(){
  Serial.begin(38400);
  // LED ピンを出力に設定
  pinMode(LED_PIN0, OUTPUT);
  pinMode(LED_PIN1, OUTPUT);
  pinMode(LED_PIN2, OUTPUT);
}

void loop(){
  float temp1, temp2;
  int val;
  // 温度センサー(LM60CIZ)
  val = analogRead(TEMP_PIN0);
  val  = map(val,0,1023,0,5000);
  temp1 = map(val,174,1205,-400,1250) / 10.0;
  Serial.println("temp1: " + String(temp1));
  // 温度センサー(LM61CIZ)
  val = analogRead(TEMP_PIN1);
  val  = map(val,0,1023,0,5000);
  temp2 = map(val,300,1600,-300,1000) / 10.0;
  Serial.println("temp2: " + String(temp2));

  delay(1000);

  // RED
  if (temp1 <= 20 || temp1 >= 28) {
    digitalWrite(LED_PIN0, HIGH);
    delay(1000);
    digitalWrite(LED_PIN0, LOW);
    delay(1000);
  }
  // YELLOW
  if (temp1 <= 22 || temp1 >= 26) {
    digitalWrite(LED_PIN1, HIGH);
    delay(1000);
    digitalWrite(LED_PIN1, LOW);
    delay(1000);
  }
  // GREEN
  if (temp1 > 22 && temp1 < 26) {
    digitalWrite(LED_PIN2, HIGH);
    delay(1000);
    digitalWrite(LED_PIN2, LOW);
    delay(1000);
  }
}
