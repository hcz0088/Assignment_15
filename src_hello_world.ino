/* Contributor: Hanchen Zhu
  Contributor: Gongduo Huang 
 * Hello World – 1_led
 */
const uint8_t LED_PIN = 26;
const uint8_t BTN_PIN = 2; 

void setup() {
  pinMode(LED_PIN, OUTPUT);
  pinMode(BTN_PIN, INPUT_PULLUP); 
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  bool pressed = (digitalRead(BTN_PIN) == LOW);
  digitalWrite(LED_PIN, pressed ? HIGH : LOW);
}
