#include <iostream>
using namespace std;

int main() 
{

string morseCode[26];
morseCode[0] = ".-"; //A
morseCode[1] = "-..."; //B
morseCode[2] = "-.-."; //C
morseCode[3] = "-.."; //D
morseCode[4] = "."; //E
morseCode[5] = "..-."; //F
morseCode[6] = "--."; //G
morseCode[7] = "...."; //H
morseCode[8] = ".."; //I
morseCode[9] = ".---"; //J
morseCode[10] = "-.--"; //K
morseCode[11] = ".-.."; //L
morseCode[12] = "--"; //M
morseCode[13] = "-."; //N
morseCode[14] = "---"; //O
morseCode[15] = ".--."; //P
morseCode[16] = "--.-"; //Q
morseCode[17] = ".-."; //R
morseCode[18] = "..."; //S
morseCode[19] = "-"; //T
morseCode[20] = "..-"; //U
morseCode[21] = "...-"; //V
morseCode[22] = ".--"; //W
morseCode[23] = "-..-"; //X
morseCode[24] = "-.--"; //Y
morseCode[25] = "--.."; //Z

string userInput;
cout << "Input a message to translate into Morse code:" <<endl;
getline(cin, userInput);

string translate = "";

for(int i = 0; i < userInput.length(); i++) 
{  
      int c = userInput[i] - 97;
      if (c >= 0 && c <=25) 
           translate += morseCode[c];
}
cout << translate;

return 0;
}