# Wireless IR Data Transfer using Arduino & XBee

## Overview

This project demonstrates a **wireless infrared (IR) data communication system** using Arduino microcontrollers and XBee (ZigBee) modules.  

The system enables **remote sensing and real-time wireless transmission** of IR sensor data between two computers through Arduino-based master and slave nodes.

Developed as part of an **Analog Communication course project**, this work showcases practical implementation of wireless communication using low-power embedded systems.

---

## Objectives

- Implement remote sensing using an IR sensor  
- Establish wireless communication using XBee modules  
- Enable real-time transmission of sensor data  
- Demonstrate master–slave wireless communication between PCs  

---

## Hardware Components

- Arduino UNO (2 units)  
- XBee S2C Modules (2 units)  
- Infrared (IR) Sensor  
- Breadboard  
- Jumper Wires  
- USB Cables  

---

## Software Tools

- Arduino IDE  
- XCTU Software for XBee configuration  

---

## System Architecture

### Transmitter Node (Master)
- IR sensor detects objects or IR signals  
- Arduino processes sensor input  
- Data transmitted wirelessly via XBee module  

### Receiver Node (Slave)
- XBee receives transmitted data  
- Arduino processes incoming data  
- Information displayed on the receiving computer  

---

## Working Principle

1. IR sensor detects infrared signals or object presence.  
2. Arduino reads the sensor output.  
3. Data is sent to the XBee module.  
4. XBee transmits the data wirelessly over a ZigBee network.  
5. Receiver XBee captures the transmitted signal.  
6. Data is displayed on the receiving system for monitoring.  

---

## XBee Configuration Summary

- One XBee configured as **Coordinator**  
- Other configured as **End Device**  
- Both modules share the same **PAN ID**  
- Destination addressing configured for communication  
- API mode used for coordinator communication  

---

## Key Features

- Wireless IR data communication  
- Low power ZigBee networking  
- Real-time data transmission  
- Simple and scalable architecture  
- Reliable short-range wireless sensing  

---

## Applications

- Smart home automation  
- Security and surveillance systems  
- Industrial monitoring  
- Wireless sensor networks  
- Robotics obstacle detection  

---

## Team Members

- K. Mohith Prakash  
- Y. Harsha Vardhan  
- Vikram Patil  
- G. Hari Krishna  

---

## Academic Context

**Course:** Analog Communication  
**Institution:** Indian Institute of Technology Bhubaneswar  

---

## License

This project is developed for academic and educational purposes.  
Free to use for learning and research.
