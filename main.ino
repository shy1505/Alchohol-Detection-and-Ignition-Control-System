#define MQ3_PIN 34
#define RELAY_PIN 26
#define BUZZER_PIN 27

int threshold = 400;

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  pinMode(BUZZER_PIN, OUTPUT);

  digitalWrite(RELAY_PIN, HIGH); // Motor ON initially
}

void loop() {
  int sensorValue = analogRead(MQ3_PIN);
  Serial.println(sensorValue);

  if (sensorValue > threshold) {
    digitalWrite(RELAY_PIN, LOW);  // Motor OFF
    digitalWrite(BUZZER_PIN, HIGH); // Buzzer ON
  } else {
    digitalWrite(RELAY_PIN, HIGH); // Motor ON
    digitalWrite(BUZZER_PIN, LOW); // Buzzer OFF
  }

  delay(500);
}
