# R.I.K.[Robot-Interactive-K-9]
Something big is built in small steps

This is the repository for R.I.K.
The goal is to collaborate between senior project members to make a quadruped dog robot autonomous. 
This is a system for members with basic knowledge in C++, C & Java. 

This project started when our group stumbled upon a youtube video showcasing an awesome robotic dog that acts on it's own named aibo(https://www.youtube.com/watch?v=8t8fyiiQVZ0). We were intrigued by it, that we started to research how robots work. Coincidentally,  This gave me the inspiration to make my own. There is a problem, though, that this tutorial requires too many components and some of which are difficult to find. I told myself, "There must be an easier way!". As a result, I came up with my own design using only a few common components. In fact, you might have most of the components for this project if you bought an Arduino Starter Kit or some similar kits. Of course, this design is not the safest, nor production quality, but it's intended to be that way. This project, after all, is a DIY toy I made to fulfill my crave of making things. You can buy an LED Cube kit on eBay for about 2-3 times cheaper than what it costs to make it this way. The only thing you'll learn from those kits, however, is how to solder and that's it. The PCB has all the traces required. The micro-controller is pre-programmed and you don't even need to know anything about electronics to put it together. With that being said, this project is not easy. You'll run into problems and Google will be your best friend. I recommend learning basic electronics and understand how the cube works before you attempt to build one. Also, check out my video if you haven't. Good luck!

Working on the Instructions tab, Started to document the building & programming process.

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

