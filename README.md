# Hail_bot
# HAIL BOT 🍎🤖
**Automated Crop Protection System for High-Density Apple Orchards**

![Arduino](https://img.shields.io/badge/-Arduino-00979D?style=for-the-badge&logo=Arduino&logoColor=white)
![C++](https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![Status](https://img.shields.io/badge/Status-Prototype_Completed-success?style=for-the-badge)

## 📌 The Problem
In regions like Kashmir and Himachal Pradesh, unpredictable hailstorms and heavy rainfall can destroy an entire season's apple harvest ("Red Gold") in a matter of minutes. Traditional manual anti-hail nets are labor-intensive, slow to deploy during sudden storms, and permanently block essential sunlight needed for fruit ripening.

## 💡 The Solution
**HAIL BOT** is an autonomous electromechanical shield. Using real-time weather sensing, the system automatically deploys a protective canopy over the crop rows the moment precipitation is detected. Once the weather clears, it automatically retracts the net to restore 100% sunlight exposure.

### Key Features
- **Instant Autonomous Deployment:** Reacts to rain/hail in under a second.
- **Smart Retraction:** Opens back up when dry to prevent fungal growth and allow sunlight.
- **Wait-for-Change Logic:** Custom C++ state-machine firmware synchronizes the system on startup, preventing erratic motor behavior during power outages.
- **Visual & Audio Alerts:** Integrated LED and Buzzer warn farmers when the system is active.

---

## 🛠️ Hardware Requirements
- Arduino Uno (ATmega328P)
- Resistive Rain / Moisture Sensor Module
- L298N Motor Driver (H-Bridge)
- 12V High-Torque DC Geared Motors
- 12V DC Power Supply (or Tractor Battery)
- LED & 5V Active Buzzer
- Structural Frame & Retractable Netting

---

## ⚡ Circuit & Pinout



| Component | Arduino Pin |
| :--- | :--- |
| Rain Sensor (DO) | `Pin 4` (INPUT) |
| L298N Motor IN1 | `Pin 6` (OUTPUT) |
| L298N Motor IN2 | `Pin 7` (OUTPUT) |
| Alert LED | `Pin 3` (OUTPUT) |
| Alert Buzzer | `Pin 5` (OUTPUT) |

---

# Future Roadmap (Scalability)
Phase 2: Integrate ESP32 / GSM module to send SMS/WhatsApp alerts to the farmer's phone ("Storm Detected - Deploying Nets").

Phase 3: Upgrade to Capacitive Rain Sensors for better corrosion resistance.

Phase 4: Add a 50W Solar Panel + Charge Controller for 100% off-grid operation.



## 💻 Installation & Usage
1. Clone this repository:
   ```bash
   git clone [https://github.com/Thehabilwani/Hail_bot](https://github.com/Thehabilwani/Hail_bot)
