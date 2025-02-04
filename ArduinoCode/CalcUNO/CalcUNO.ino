float operand1, operand2, result;
String firstNum, secondNum, inputString;
char operand;
int stringLength = 0, opIndex;

void setup() {
  Serial.begin(9600); //Initalizing the baudrate for serial communication
}

void loop() {
  if (Serial.available() > 0) { 
    /*this section constitutes the serial communication module and the parsing module where the 
    a string is read from the serial link sent by the destop application and parsed to obtain the 
    actual operands and operator*/
    inputString = Serial.readStringUntil('\n');
    inputString.trim(); // serves in removing leading or trailing whitespaces in the received string
    stringLength = inputString.length();
    opIndex = -1; // Initializing operator Index (position)

    for (int i = 0; i < stringLength; i++) { 
      if (inputString.charAt(i) == '+' || inputString.charAt(i) == '-' || inputString.charAt(i) == '*' || inputString.charAt(i) == '/') {
        opIndex = i;
        operand = inputString.charAt(i);
        break; // This helps to exit the loop once the operator is found
      }
    }

    if (opIndex != -1) { // Checking if an operator was found
      firstNum = inputString.substring(0, opIndex);
      firstNum.trim();
      operand1 = firstNum.toFloat();
     

      secondNum = inputString.substring(opIndex + 1, stringLength); 
      secondNum.trim();
      operand2 = secondNum.toFloat();
    
    /*The following switch function consist of the arithmetic module and uses 
    the operand and the operators gotten from the parsing module to parse and produce 
    a result which is sent to the serial communication module to be received by the 
    desktop application*/
      switch (operand) {
        case '+':
          result = operand1 + operand2;
          Serial.println(result); 
          break;
        case '-':
          result = operand1 - operand2;
          Serial.println(result);
          break;
        case '*':
          result = operand1 * operand2;
          Serial.println(result);
          break;
        case '/':
          if (operand2 == 0) {
            Serial.println("Zero division error"); //This section captures a zero division error and handles it
          } else {
            result = operand1 / operand2;
            Serial.println(result);
          }
          break;
        default:
          Serial.println("Invalid Operator");
          break;
      }
    } else {
        Serial.println("No operator found");
    }
  }
}