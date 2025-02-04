``` markdown 
#CalcUNO 

A desktop calculator application built using Qt Creator and an Arudion board. The application performs basic arithmetic operations of: addition, subtraction, mulitplication, and division on two operands. The front end receives the operands in a text field provided and the computation is done by an arduino board and the results are displayed unto the Arduino desktop app. 

--- 
## Features 
- Basic arithmetic operations (addition, subtraction, multiplication, division). 
- User-friendly interface designed using Qt. 
- Integration with an Arduino UNO to display results on the desktop. 

---
## Requirements 
-**Software**: 
    - Qt Creator (version 6.2.0)
    - Arduino IDE (version 2.0 and above)
-**Hardwar**: 
    - Arduino UNO 
-**Dependencies**: 
    Qt Serial library 

---
## Installation 
1. **Clone the repository**: 
git clone https://github.com/GPrimeTech/CalcUNO.git 
2. **Set up the Qt Project:** 
    Open Qt Creator. 
    Navigate to CalcUNO/CalcUNO_1-0.pro and open the project. 
    Build and run the project. 
3. **Upload the Arduino code:**
    Open the Arduino IDE. 
    Navigate to ArduinoCode/CalcUNO.ino and open the sketch. 
    Connect your Arduino UNO to your computer. 
    Upload the sketch to the board. 

## Usage 
1. Launch the Qt Application on your computer. 
2. Enter the Product ID and Vendor ID of your arduino board in the spaces provided. 
3. Click connect to and wait for a confirmation message for a successful connection. 
4. If there is a connection fail error, make sure your board is well connected. 
5. Enter your operands in the text field provided and choose the appropriate operand. 
6. The results will be displayed in the result field on the application.

## LICENSE 
This project is licesed under the IU International University of Applied Sciences license. 

## Contact 
Song Deodonne: song.deodonne@iu-study.org/song.deodonne@gmail.com 
GitHub: GPrimeTech 