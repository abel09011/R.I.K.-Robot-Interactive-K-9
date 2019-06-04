# R.I.K.[Robot-Interactive-K-9]
Something big is built in small steps

This is the repository for R.I.K.
The goal is to collaborate between senior project members to make a quadruped dog robot autonomous. 
This project requires basic knowledge of C++, C & Java or pyhton. 

This senior project started when our group stumbled upon a youtube video showcasing an awesome robotic dog that acts on it's own named [Aibo](https://www.youtube.com/watch?v=8t8fyiiQVZ0 "Aibo"). We were intrigued by it, that we started to research how robots work. Coincidentally, this gave us the inspiration to make our own robotic dog. There was a problem, though, that this robotic dog was too expensive. We told ourselves, "There must be an easier and cheaper way!". As a result, we came up with our own design and easier to find components. In fact, most of the components for this project can be found in Arduino Starter Kits. Of course, this design is not the best, nor it is for final production, but it's intended to be a working prototype. The PCB design and 3D STL files can be found in their respective folders, along side the code. The Mega micro-controller is programmed uisng the master.ino file and the android application is used to connect to robotic dog.

Started to document the building & programming process.

Figure 1 shows the current prototype
![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/RIK%20Final%20Design.png)

Figure 2 shows the back of the prototype
![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/RIK's%20Back.png)

**Components**


| Item                                                     | Value   |
| -------------------------------------------------------- | -------:|
| 1x Arduino MEGA 2560                                     | $40     |
| 1x USB cable A to B (also known as the printer cable)    |   $4    |
| 14x 13.8g MG92B Servo  ($7.70)each                       | $107.8  |
| 1x Breadboard                                            | $3      |
| Various Male-to-male & Male-to-female wires              |   $8    |
| 1x 7.4V (2 Cell) 4000 mAh (or above) LiPo battery        |   $10   |
| 1x 3A UBEC (Universal Battery Elimination Circuit        |   $4    |
| 1x HC 06 Bluetooth module                                | $8      |
| 1x Protoboard                                            | $5      |
| 1x Sodering Kit                                          |   $20   |
| Various male pin headers                                 |   $6    |

**Application Functions**


| Function name | Description                    |
| ------------- | ------------------------------ |
| `hey()`       | **Default state**              |
| `shake()`     | **Shakes Paw**                 |
| `alert()`     | **Listens for Commands**       |
| `up()`        | **Stands Up**                  |
| `vow()`       | **Bends front Legs**           |
| `walk()`      | **Does the walking Animation** |
| `down()`      | **Bends Down**                 |
| `tail2()`     | **Tail Animation**             |
| `head2()`     | **Head Animation**             |

