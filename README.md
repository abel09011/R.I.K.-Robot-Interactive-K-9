# R.I.K.[Robot-Interactive-K-9]
Something big is built in small steps

This is the repository for R.I.K.
The goal is to collaborate between senior project members to make a quadruped dog robot autonomous. 
This project requires basic knowledge of C++, C & Java or pyhton. 

This senior project started when our group stumbled upon a youtube video showcasing an awesome robotic dog that acts on it's own named [Aibo](https://www.youtube.com/watch?v=8t8fyiiQVZ0 "Aibo"). We were intrigued by it, that we started to research how robots work. Coincidentally, this gave us the inspiration to make our own robotic dog. There was a problem, though, that this robotic dog was too expensive. We told ourselves, "There must be an easier and cheaper way!". As a result, we came up with our own design and easier to find components. 

Of course, this design is not the best, nor it is for final production, but it's intended to be a working prototype. The PCB design and 3D STL files can be found in their respective folders, along side the code. Basic knowledge is needed in order to Print/Laser cut the required robotic parts. The Mega micro-controller is programmed uisng the master.ino file and the android application is used to connect to robotic dog.


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
| Plywood                                                  |   $10   |


**Application Functions**


| Function name | Description                    | Voice Command   |
| ------------- | ------------------------------ | --------------- |
| `hey()`       | **Default state**              | **HEY**         |
| `shake()`     | **Shakes Paw**                 | **SHAKE**       |
| `alert()`     | **Listens for Commands**       |                 |
| `up()`        | **Stands Up**                  | **STAND**       |
| `vow()`       | **Bends front Legs**           | **VOW**         |
| `walk()`      | **Does the walking Animation** | **WALK**        |
| `down()`      | **Bends Down**                 | **DOWN**        |
| `tail2()`     | **Tail Animation**             |                 |
| `head2()`     | **Head Animation**             |                 |



### 3D Model Parts

The body parts were created in SolidWorks

![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Solid%20Work%20Parts/Head%20STLs.png)

![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Solid%20Work%20Parts/Legs%20STLs.png)

![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Solid%20Work%20Parts/Main%20Frame%20STLs.png)


The following parts were laser cutted with plywood
![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Laser%20Cut%20Blueprint.png)

![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Head%20%26%20Neck.png)

![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Legs%20%26%20Main%20Frame.png)


### Android Application Commands

Here are the Icons and GUI for our Android application

![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Android%20Icons.png)
![alt text](https://github.com/abel09011/R.I.K.-Robot-Interactive-K-9/blob/master/Android%20GUI.png)


### To Do List

- Started to document the building & programming process.


### Credits

- All the persons who contributed to the `R.I.K` project with me: Jairo Mazariegos, Paul Barrameda, Chris Espino, Franklin Cortez.
- GoogleCloudPlatform libraries, Arduino, Aibo, Petoi.

###### End
