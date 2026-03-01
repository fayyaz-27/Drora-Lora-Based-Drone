# 📡 Drora – LoRa Communication System for Drone
### Drone Integration for Defense & Disaster Management  

This repository contains the long-range LoRa communication architecture developed for **Drora**, a defense and disaster-response drone built during a 48-hour national-level hardware hackathon (Tech-a-thon 2025).

This README focuses only on the **LoRa communication subsystem**.

---

## 🎯 Objective

To establish a **secure, long-distance wireless communication link** between:

- 🚁 Drone (Transmitter)
- 📡 Repeater Station
- 🖥 Base Station (Receiver)

The system ensures reliable data transmission over extended distances for defense and rescue operations.

---

## 🧠 System Architecture

Drone (LoRa TX)  
→ Repeater Station (LoRa RX + TX)  
→ Base Station (LoRa RX)

---

## 🔁 Communication Flow

### 1️⃣ Drone – LoRa Transmitter (TX)

- ESP32 connected to LoRa module
- Sends telemetry / detection data
- Uses authentication token for secure communication
- Mounted on drone

---

### 2️⃣ Repeater Station – LoRa RX + TX

- ESP32 configured as relay node
- Receives data from drone
- Immediately retransmits to extend communication range
- Used to overcome terrain obstruction / signal loss

---

### 3️⃣ Base Station – LoRa Receiver (RX)

- ESP32 with LoRa module
- Receives final transmitted data
- Data forwarded to:
  - Webserver
  - Monitoring UI
  - Control system

---

## 📡 Why LoRa?

LoRa was chosen because:

- Long-range communication (several kilometers)
- Low power consumption
- Better penetration through obstacles compared to WiFi
- Suitable for defense & disaster environments
- Works without internet infrastructure

This makes it ideal for:
- Border surveillance
- Search & rescue missions
- Remote disaster zones
- Infrastructure failure scenarios

---

## 🔐 Security Implementation

To prevent unauthorized data access:

- One-to-one communication logic
- Authentication token validation
- Controlled packet structure
- Dedicated transmitter–receiver pairing

---

## 🛠 Hardware Used

- ESP32 Dev Modules (TX, Repeater, RX)
- LoRa Modules (433 MHz / 868 MHz / 915 MHz based on region)
- Drone platform (Pixhawk integrated system)

---

## 🚀 Built During

Tech-a-thon 2025  
48-hour National-Level Hardware Hackathon  
27th – 29th March 2025  

Team: **Brocode**

- Fayyaz Shaikh (Team Leader)
- Sairudra Gudur
- Advait Shinde
- Harsh Pandey

---

## 🏁 Outcome

The LoRa communication system successfully enabled:

- Extended-range drone communication  
- Reliable data relay through repeater  
- Secure base station monitoring  

Designed and implemented within 48 hours.
