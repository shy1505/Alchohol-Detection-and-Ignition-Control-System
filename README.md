# Alchohol-Detection-and-Ignition-Control-System
## 📌 Overview

This project is an embedded system designed to prevent drunk driving by detecting alcohol presence and disabling vehicle ignition.

It uses an MQ-3 alcohol sensor with ESP32 to monitor alcohol levels in the surrounding air. If alcohol is detected beyond a threshold, the system disables the ignition (motor OFF) and triggers an alert (buzzer).

---

## ⚙️ Components Used

* ESP32 Microcontroller
* MQ-3 Alcohol Sensor
* Relay Module
* DC Motor (Engine Simulation)
* Buzzer
* Power Supply

---

## 🧠 Working Principle

1. MQ-3 sensor detects alcohol vapors in air
2. ESP32 reads analog signal from MQ-3
3. If value exceeds threshold:

   * Relay turns OFF motor (engine stops)
   * Buzzer starts beeping
4. If no alcohol:

   * Motor remains ON
   * System runs normally

## 💻 Code

Code is available in the `/code` folder.


## 📊 Output

* Motor stops when alcohol is detected
* Buzzer alerts the user
* Real-time monitoring using ESP32

---

## 🚀 Future Improvements

* Integration with GPS for tracking
* GSM module for sending alerts
* Mobile app monitoring
* AI-based alcohol detection accuracy

---

## 🧑‍💻 Author

Shyamali Kumari
Diploma in Electronics Engineering (2021-24)

---

## ⭐ If you found this useful

Give this repo a star ⭐
