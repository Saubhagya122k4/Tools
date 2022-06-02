#include<iostream>
#include<stdio.h>  
#include<conio.h>  
#include<math.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;


//function required for calculator
void add()
{
  system ("CLS");
  int n, sum = 0, i, number;  
  cout<<"How many numbers you want to add: ";  
  cin>> n;  
  cout<< "Please enter the number one by one: \n";  
  for (i = 1; i <= n; i++)
  {
  cin>>number;  
  sum = sum + number;
  }
cout<<"\n Sum of the numbers = "<< sum<<endl<<endl;
}
  
void sub()  
{ 
  system ("CLS"); 
  int num1, num2, z;
  cout<<" \n Enter the First number = ";
  cin>> num1;  
  cout<< "\n Enter the Second number = ";
  cin>> num2;
  z = num1 - num2;  
  cout<<"\n Subtraction of the number = " << z<<endl<<endl; 
} 

void multi()  
{  
  system ("CLS");
  int num1, num2, mul;  
  cout <<" \n Enter the First number = ";  
  cin >> num1;  
  cout << "\n Enter the Second number = ";  
  cin >> num2;  
  mul = num1 * num2;  
  cout <<"\n Multiplication of two numbers = " << mul<<endl<<endl;  
} 


void division()  
{ 
  system ("CLS"); 
  int num1, num2, div = 0;  
  cout <<" \n Enter the First number = ";  
  cin >> num1;  
  cout << "\n Enter the Second number = ";  
  cin >> num2;  
  while ( num2 == 0)  
    {  
      cout << "\n Divisor canot be zero" "\n Please enter the divisor once again: ";  
      cin >> num2;  
    }  
  div = num1 / num2;  
  cout <<"\n Division of two numbers = " << div<<endl<<endl;  
}   


void sqr()  
{ 
  system ("CLS"); 
  int num1;  
  float sq;  
  cout <<" \n Enter a number to find the Square: ";  
  cin >> num1;  
  sq = num1 * num1;  
  cout <<" \n Square of " << num1<< " is : "<< sq<<endl<<endl;  
}  


void srt()  
{ 
  system ("CLS"); 
  float q;  
  int num1;  
  cout << "\n Enter the number to find the Square Root:";  
  cin >> num1;  
  q = sqrt(num1);  
  cout <<" \n Square Root of " << num1<< " is : "<< q<<endl<<endl;  
}
//********************************

//Function Required for Number System Conversion are here
int conBinToDec(long long n) //Binary to Decimal
{
 int decnum = 0, i = 0, remainder;
 while(n!=0)
 {
  remainder = n %10;
  n = n/10;
  decnum = decnum + remainder*pow(2,i);
  ++i;
 }
 return decnum;
}
int conDecToBin(int n) //Deciaml to Binary
{
 long long binnum = 0;
 int remainder, i = 1, step = 1;
 while(n!=0)
 {
  remainder = n%2;
  step++;
  n = n/2;
  binnum = binnum + remainder*i;
  i = i*10;
 }
 return binnum;
}

int conOctToDec(int octnum) //Octal to Decimal
{
 int decnum = 0, i = 0, rem;
 while(octnum!=0)
 {
  rem = octnum%10;
  octnum = octnum/10;
  decnum = decnum + rem*pow(8,i);
  ++i;
 }
 return decnum;
}

int conDecToOct(int decnum) //Deciaml to Octal
{
 int rem, i=1, octnum =0;
 while(decnum!=0)
 {
  rem = decnum%8;
  decnum = decnum/8;
  octnum = octnum + rem*i;
  i = i*10;
 }
 return octnum;
}

int conBinToOct(long long binnum)  //Binary to Octal
{
 int octnum = 0, decnum =0, i=0;
 while(binnum!=0)
 {
  decnum = decnum + (binnum%10) * pow(2,i);
  ++i;
  binnum = binnum/10;
 }
 i = 1;
 while(decnum!=0)
 {
  octnum = octnum + (decnum%8)*i;
  decnum = decnum/8;
  i = i*10;
 }
 return octnum;
}
//***********************************


void moarse()
{
system("cls"); 
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
cout << "Input a message to translate into Morse code: ";
getline(cin >> ws, userInput);

string translate = "";

for(int i = 0; i < userInput.length(); i++) 
{  
      int c = userInput[i] - 97;
      if (c >= 0 && c <=25) 
           translate += morseCode[c];
}
cout <<"Result: "<<translate<<endl<<endl;
}


//The Code for calculator is here

void Calculator() 
{
system ("CLS"); 
int opr;
char ch;  
// display different operation of the calculator  
do  
{  
cout << "Select any operation from the C++ Calculator"  
     "\n1 = Addition"  
     "\n2 = Subtraction"  
     "\n3 = Multiplication"  
     "\n4 = Division"  
     "\n5 = Square"  
     "\n6 = Square Root"  
     "\n7 = Exit"  
     "\n \nMake a choice: ";  
     cin >> opr;  
  
   switch (opr)  
  {  
    case 1:  
    add();   // call add() function to find the Addition  
    break;  
    case 2:  
    sub();   // call sub() function to find the subtraction  
    break;  
    case 3:  
    multi(); // call multi() function to find the multiplication  
    break;  
    case 4:  
    division(); // call division() function to find the division  
    break;  
    case 5:  
    sqr(); // call sqr() function to find the square of a number  
    break;  
    case 6:  
    srt(); // call srt() function to find the Square Root of the given number  
    break;  
    case 7: 
    cout<<"Thank You"<<endl<<endl;   // terminate the program  
    break;  

    default:  
    cout <<"Something is wrong..!!"<<endl<<endl;  
    break;  
  } 
    cout << "\n Do you want to Continue Calculator? Y/N :: " ;
    cin >> ch;
    cout << " ------------------------------------------" << endl;
  } while(ch == 'Y' ||ch=='y');

  cout << "Thank You." << endl<<endl;
}
//*******************************


//Number System Converter code is here

void NumSysConv()
{
system ("CLS");
 int ch;
 char chr;
 do
 {
 cout<<"Select the Conversion Type: "<<endl;
 cout<<"1. Binary to Decimal"
 "\n2. Decimal to Binary"
 "\n3. Octal to Decimal"
 "\n4. Decimal to Octal"
 "\n5. Binary to Octal"
 "\n6. Exit"
 "\n \nMake a Choice: ";
 cin>>ch;

 switch(ch)
 {
  case 1:
  system("cls");
  long long n;
  cout<<"Enter a binary number: \n";
  cin>>n;
  cout<<n<<" in binary = "<<conBinToDec(n)<<" in decimal"<<endl<<endl;
  break;

  case 2:
  system("cls");
  int p;
  cout<<"Enter a decimal number: \n";
  cin>>p;
  cout<<p<<" in decimal = "<<conDecToBin(p)<<" in binary"<<endl<<endl;
  break;

  case 3:
  system("cls");
  int q;
  cout<<"Enter a octal number: \n";
  cin>>q;
  cout<<q<<" in octal = "<<conOctToDec(q)<<" in decimal"<<endl<<endl;
  break;

  case 4:
  system("cls");
  int r;
  cout<<"Enter a decimal number: \n";
  cin>>r;
  cout<<r<<" in decimal = "<<conDecToOct(r)<<" in octal"<<endl<<endl;
  break;

  case 5:
  system("cls");
  int s;
  cout<<"Enter a binary number: \n";
  cin>>s;
  cout<<s<<" in binary = "<<conBinToOct(s)<<" in octal"<<endl<<endl;
  break;

  case 6:
  cout<<"Thank You"<<endl<<endl;
  break;

  default:
  cout<<"Invalid choice!!! Select between 1 to 6"<<endl<<endl;
  break;
 }
    cout<<"\n Do you want to Continue Number System Converter? Y/N :: " ;
    cin>>chr;
    cout<<" -----------------------------"<<endl;
  } while(chr == 'Y' ||chr =='y');

  cout<<"Thank You."<<endl<<endl;
}

void DataUniConv()
{
    system ("CLS");
		int option;
    char chr;
		double Bit,B,KB,MB,GB,TB,PB,EB,ZB,YB;

			do {
				cout<<"Choose Choose the Operation"
					"\n0. Bits to Bytes"
					"\n1. Bytes to Kilobytes"
					"\n2. Kilobyte to Megabyte"
					"\n3. Megabyte to Gigabyte"
					"\n4. Gigabyte to Terrabyte"
					"\n5. Terrabyte to Petabyte"
					"\n6. Petabyte to Exabytes"
					"\n7. Exabytes to Zettabytes"
					"\n8. Zettabytes to Yottabytes"
					"\n9. Bits to Kilobytes"
					"\n10. Bits to Megabytes"
          "\n11. Exit"
					"\n\nChoose Unit Conversion: ";
				cin>> option;
				cout<<'\n';

    switch(option)
			{
			case 0:
      system("cls");
				cout<<"Enter Bits to be converted: ";
				cin>>Bit;
				cout<<"\n";
				B = Bit * 0.125;
				cout<<Bit<<" Bits = "<<B<<" Bytes"<<endl<<endl;
				break;

			case 1:
      system("cls");
				cout<<"Enter Bytes to be converted: ";
				cin>>B;
				cout<<"\n";
				KB = B * 0.0009765625;
				cout<<B<<" Bytes = "<<KB<<" Kilobytes"<<endl<<endl;
				break;

			case 2:
      system("cls");
				cout<<"Enter Kilobytes to Be converted: ";
					cin>>KB;
				cout<<"\n";
				MB = KB * 0.0009765625;
				cout<<KB<<" Kilobytes = "<<MB<<" Megabytes"<<endl<<endl;
				break;

			case 3:
      system("cls");
				cout<<"Enter Megabytes to Be converted: ";
				cin>> MB;
				cout<<"\n";
				GB = MB * 0.0009765625;
				cout<<MB<<" Megabytes = "<<GB<<" Gigabytes"<<endl<<endl;
				break;

			case 4:
      system("cls");
				cout<<"Enter Gigabytes to be converted: ";
				cin>> GB;
				cout<<"\n";
				TB = GB * 0.0009765625;
				cout<<GB<<" Gigabytes = "<<TB<<" Terrabytes"<<endl<<endl;
				break;

			case 5:
      system("cls");
				cout<<"Enter Terrabytes to be converted: ";
				cin>> TB;
				cout<<"\n";
				PB = TB * 0.0009765625;
				cout<<TB<<" Terrabytes = "<<PB<<" Petabyte"<<endl<<endl;
				break;

			case 6:
      system("cls");
				cout<<"Enter Petabytes to be converted: ";
				cin>> PB;
				cout<<"\n";
				EB = PB * 0.0009765625;
				cout<<PB<<" Petabytes = "<<EB<<" Exabytes"<<endl<<endl;
				break;

			case 7:
      system("cls");
				cout<<"Enter Exabytes to be converted: ";
				cin>>EB;
				cout<<"\n";
				ZB = EB * 0.0009765625;
				cout<<EB<<" Exabytes = "<<ZB<<" Zettabytes"<<endl<<endl;
				break;
				
			case 8:
      system("cls");
				cout<<"Enter Zettabytes to be converted: ";
				cin>>ZB;
				cout<<"\n";
				YB = ZB * 0.0009765625;
				cout<<ZB<<" Zettabytes = "<<YB<<" Yottabytes"<<endl<<endl;
				break;

			case 9:
      system("cls");
				cout<<"Enter Bits to be converted: ";
				cin>>Bit;
				cout<<"\n";
				KB = Bit * 0.0001220703125;
				cout<<Bit<<" Bits = "<<KB<<" Kilobytes"<<endl<<endl;
				break;

			case 10:
      system("cls");
				cout<<"Enter Bits to be converted: ";
				cin>>Bit;
				cout<<"\n";
				MB = Bit * 1.1920928955078125e-7;
				cout<<Bit<<" Bits = "<<MB<<" Megabytes"<<endl<<endl;
				break;

      case 11:
        cout<<"Thank You"<<endl<<endl;
        break;

      default:
        cout<<"Choose the Option between 1 to 11"<<endl<<endl;
        break;
		} 
      cout<<"\n Do you want to Continue Data Unit Converter? Y/N :: ";
      cin>>chr;
      cout<<" ---------------------------------------------------"<<endl; /* code */
    } while (chr == 'Y' ||chr =='y');
    cout<<"Thank You."<<endl<<endl;
}


void CTF()
{
  system("clear");
    float fahr, cel;
    cout << "Enter the temperature in Celsius: ";
    cin >> cel;

    fahr = (1.8 * cel) + 32.0; //temperature conversion formula
    cout << "\nTemperature in degree Fahrenheit: " << fahr << " F" <<endl<<endl;
}

void FTC()
{
  system("clear");
    float fahr, cel;
    cout << "Enter the temperature in Fahrenheit: ";
    cin >> fahr;

    cel = (fahr - 32) / 1.8; //temperature conversion formula
    cout <<"\nTemperature in degree Celsius: "<<cel<<" C"<<endl<<endl;
}
void TempConv()
{
  system("CLS");
  int option;
   char chr;
   do 
   {
     cout << "Choose from following option:" << endl;
     cout << "1. Celsius to Fahrenheit."
     "\n2. Fahrenheit to Celsius."
     "\n3. Exit."
     "\n \nMake a choice: "; 
     cin>>option;

     switch (option)
     {
        case 1:
        CTF();
        break;

        case 2:
        FTC();
        break;  

        case 3:
        cout<<"Thank You"<<endl<<endl;
        break;

        default:
        cout<<"Choose the Option between 1 to 3"<<endl<<endl;
        break;
      }
      cout<<"\n Do you want to continue Temperature Unit Converter? Y/N :: ";
      cin>>chr;
      cout<<" ---------------------------------------------------------------"<<endl<<endl;  /* code */
    } while (chr == 'Y' ||chr =='y'); 
  }
   

void Converter()
{
  system ("CLS");
 int ch;
 char chr;
 do
 {
 cout<<"Select the converter: "<<endl;
 cout<<"1. Number System Converter"
 "\n2. Temperature Unit Converter"
 "\n3. Data Unit Converter"
 "\n4. Exit"
 "\n \nMake a Choice: ";
 cin>>ch;

 switch(ch)
 {
  case 1:
  NumSysConv();
  break;

  case 2:
  TempConv();
  break;

  case 3:
  DataUniConv();
  break;

  case 4:
  cout<<"Thank You"<<endl<<endl;
  break;

  default:
  cout<<"Invalid choice!!! Select between 1 to 5"<<endl<<endl;
  break;
 }
    cout<<"\n Do you want to continue Converter? Y/N :: " ;
    cin>>chr;
    cout<<" -----------------------------"<<endl;
  } while(chr == 'Y' ||chr =='y');

  cout<<"Thank You."<<endl<<endl;

}

void exit()
{
    cout<<"Thank You"<<endl<<endl;
}


//main function is started here
void Tools()
{
  system ("CLS");
  int ch;
  char chr;
  do
  {
    cout<<"Please Enter your choose Tool"<<endl;
    cout<<"1. Moarse Code Generator"
    "\n2. Calculator"
    "\n3. Converter"
    "\n4. Exit"
    "\n \nMake a Choice: ";
    cin>>ch;

    switch (ch)
    {
    case 1:
    moarse();
    break;

    case 2:
    Calculator();
    break;

    case 3:
    Converter();
    break;  

    case 4:
    exit(); 
    break;

    default:
    cout<<"Choose the Option between 1 to 4"<<endl<<endl;
    break;
    }
    cout<<"       *****************************************";
    cout<<"\n\tDo you want to continue Tools? Y/N :: ";
    cin>>chr;
    cout<<"\t -------------------------------------"<<endl;
    cout<<"\t\t\tThank you\t\t"<<endl<<endl;  /* code */
  } while (chr == 'Y' ||chr =='y');  
}



int main()
{
  Tools();
}
