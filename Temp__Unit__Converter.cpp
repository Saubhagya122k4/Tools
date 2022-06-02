#include<iostream>
#include<stdio.h>  
#include<conio.h>  
#include<math.h>
#include<stdlib.h>
#include<iomanip>
using namespace std;


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


int main()
{
    TempConv();
}