#include <SPI.h>
#include <LoRa.h>

// Define the pins used by the transceiver module
#define ss 5    // Change to 15 if needed
#define rst 14
#define dio0 2

int counter = 0;

void setup() {
  Serial.begin(115200);
  while (!Serial);
  Serial.println("LoRa Sender");

  // Setup LoRa transceiver module
  LoRa.setPins(ss, rst, dio0);

  // Set frequency - change based on your region
  if (!LoRa.begin(433E6)) { // 433E6 for Asia, 868E6 for Europe, 915E6 for North America
    Serial.println("LoRa initialization failed. Check connections.");
    while (true);
  }

  // Set sync word (must match receiver)
  LoRa.setSyncWord(0xAB);
  Serial.println("LoRa Initialized Successfully!");
}

void loop() {
  Serial.print("Sending packet: ");
  Serial.println(counter);

  // Send LoRa packet to receiver
  LoRa.beginPacket();
  LoRa.print("Hello ");
  LoRa.print(counter);
  LoRa.endPacket();

  counter++;

  delay(2000); // Adjust delay if needed
}
