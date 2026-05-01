# Blink — Arduino Uno + PlatformIO

First embedded systems project. A red LED on a breadboard blinks on and off every second, controlled by an Arduino Uno flashed via PlatformIO on VS Code.

---

## Hardware

| Component | Quantity |
|---|---|
| Arduino Uno R3 | 1 |
| Red LED | 1 |
| 220Ω resistor | 1 |
| Jumper wires | 2 |
| Breadboard | 1 |

**Wiring:**
```
Arduino Pin 12 → 220Ω resistor → LED long leg (+) → LED short leg (–) → GND
```

---

## Software

- **Platform:** PlatformIO on VS Code
- **Framework:** Arduino
- **Language:** C++
- **Board:** Arduino Uno (ATMEGA328P, 16MHz, 2KB RAM, 32KB Flash)

---

## Code

```cpp
#include <Arduino.h>

#define LED_PIN 12

void setup() {
  pinMode(LED_PIN, OUTPUT);
}

void loop() {
  digitalWrite(LED_PIN, HIGH);  // LED ON
  delay(1000);
  digitalWrite(LED_PIN, LOW);   // LED OFF
  delay(1000);
}
```

---

## How to Upload

1. Plug Arduino into PC via USB
2. Run in terminal:
```bash
pio run --target upload
```
3. To monitor serial output:
```bash
pio device monitor --baud 9600
```

> **Linux users:** If you get a permission denied error on `/dev/ttyACM0`, run:
> ```bash
> curl -fsSL https://raw.githubusercontent.com/platformio/platformio-core/develop/platformio/assets/system/99-platformio-udev.rules | sudo tee /etc/udev/rules.d/99-platformio-udev.rules
> sudo usermod -a -G dialout $USER
> ```
> Then log out and back in, replug the Arduino.

---

## What it does

`setup()` runs once — sets pin 12 as an output. `loop()` runs forever — drives pin 12 HIGH (5V) for 1 second turning the LED on, then LOW (0V) for 1 second turning it off. The 220Ω resistor limits current to ~14mA, keeping the LED safe.

---

## Flash usage
```
RAM:   0.4% (9 / 2048 bytes)
Flash: 2.9% (924 / 32256 bytes)
```