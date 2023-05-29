#include <Adafruit_Sensor.h>
#include <DHT.h>
#include <DHT_U.h>
#include <LiquidCrystal_I2C.h>
#include <ESP32Servo.h>

#define DHTPIN 4
#define DHTTYPE DHT22
#define FANPIN 5
#define IRPIN 6
#define THRESHOLD_TEMP 25.0
#define THRESHOLD_IR 1

DHT_Unified dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27,16,2);
Servo fan;
int fanSpeed = 0;
bool isFull = false;

void setup() {
  Serial.begin(9600);
  dht.begin();
  lcd.begin(16,2);
  fan.attach(FANPIN);
  pinMode(IRPIN, INPUT);
  fan.write(fanSpeed);
}

void loop() {
  sensors_event_t event;
  dht.temperature().getEvent(&event);
  float temperature = event.temperature;
  dht.humidity().getEvent(&event);
  float humidity = event.relative_humidity;

  int irRead = digitalRead(IRPIN);

  if (temperature >= THRESHOLD_TEMP) {
    fanSpeed = 180; // Máxima velocidade
  } else {
    fanSpeed = 0; // Desliga a ventoinha
  }
  fan.write(fanSpeed);

  if (irRead == THRESHOLD_IR) {
    isFull = true;
  } else {
    isFull = false;
  }

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Temp: ");
  lcd.print(temperature);
  lcd.print(" C");
  lcd.setCursor(0, 1);
  lcd.print("Umid: ");
  lcd.print(humidity);
  lcd.print(" %");
  lcd.setCursor(0, 2);
  lcd.print("Recipiente: ");
  lcd.print(isFull ? "Cheio" : "Vazio");

  delay(2000);
}
