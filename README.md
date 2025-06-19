# Temperature-monitoring# 🌡 Temperature Monitoring System using LM35 and LED (Arduino + Tinkercad)

This project simulates a basic temperature monitoring system using an *TMD32 temperature sensor* and an *LED* with an *Arduino UNO* in *Tinkercad*.

When the temperature exceeds a defined threshold (e.g., 30°C), the LED turns ON to indicate overheating. Otherwise, the LED remains OFF.

---

## 🔧 Components Used

- Arduino UNO  
- TMD32 Temperature Sensor  
- LED  
- 220Ω Resistor  
- Breadboard  
- Jumper Wires

---

## ⚙ Circuit Connections->https://www.tinkercad.com/things/gqm5EIH3Xhm-temperature-monitoring

### 🔥 TMD32:
| TMD32 Pin | Connection |
|----------|------------|
| Left     | 5V         |
| Middle   | A0         |
| Right    | GND        |

### 💡 LED:
| LED Pin   | Connection     |
|-----------|----------------|
| Anode (+) | Digital Pin 7 (through 220Ω resistor) |
| Cathode (–)| GND           |

---

## 🧠 Working Principle

- The *TMD32* outputs a voltage that increases with temperature (~10mV per °C).
- The Arduino reads the analog voltage on pin A0.
- It converts this to temperature in Celsius.
- If temperature > 30°C → LED turns *ON*
- If temperature ≤ 30°C → LED stays **OFF
