#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;

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

void exit();

int main()
{
 system ("CLS");
 int ch;
 char chr;
 do
 {
 cout<<"Select the conversion type: "<<endl;
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
  long long n;
  cout<<"Enter a binary number: \n";
  cin>>n;
  cout<<n<<" in binary = "<<conBinToDec(n)<<" in decimal";
  break;

  case 2:
  int p;
  cout<<"Enter a decimal number: \n";
  cin>>p;
  cout<<p<<" in decimal = "<<conDecToBin(p)<<" in binary";
  break;

  case 3:
  int q;
  cout<<"Enter a octal number: \n";
  cin>>q;
  cout<<q<<" in octal = "<<conOctToDec(q)<<" in decimal";
  break;

  case 4:
  int r;
  cout<<"Enter a decimal number: \n";
  cin>>r;
  cout<<r<<" in decimal = "<<conDecToOct(r)<<" in octal";
  break;

  case 5:
  int s;
  cout<<"Enter a binary number: \n";
  cin>>s;
  cout<<s<<" in binary = "<<conBinToOct(s)<<" in octal";
  break;

  case 6:
  cout<<"Thank You";
  exit(0);

  default:
  cout<<"Invalid choice!!! Select between 1 to 5";
  break;
 }
    cout<<"\n Do you want to continue? Y/N :: " ;
    cin>>chr;
    cout<<"-----------------------------"<<endl<<endl;
  } while(chr == 'Y' ||chr =='y');

  cout<<"Thank You."<<endl;
  return 0;

}
