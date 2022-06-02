#include<iostream>

using namespace std;

void DUC()
{
  int option;
  char chr;
	double Bit,B,KB,MB,GB,TB,PB,EB,ZB,YB;

		do 
     {
				  cout<<"Choose The Conversion Type:";
          cout<<"\n0. Bits to Bytes"
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
					"\n\nMake the Choice: ";
				cin>> option;

        switch(option)
			{
			case 0:
				cout<<"Enter Bits to be converted: ";
				cin>>Bit;
				cout<<"\n";
				B = Bit * 0.125;
				cout<<Bit<<" Bits = "<<B<<" Bytes\n";
				break;

			case 1:
				cout<<"Enter Bytes to be converted: ";
				cin>>B;
				cout<<"\n";
				KB = B * 0.0009765625;
				cout<<B<<" Bytes = "<<KB<<" Kilobytes\n";
				break;

			case 2:
				cout<<"Enter Kilobytes to Be converted: ";
					cin>>KB;
				cout<<"\n";
				MB = KB * 0.0009765625;
				cout<<KB<<" Kilobytes = "<<MB<<" Megabytes\n";
				break;

			case 3:
				cout<<"Enter Megabytes to Be converted: ";
				cin>> MB;
				cout<<"\n";
				GB = MB * 0.0009765625;
				cout<<MB<<" Megabytes = "<<GB<<" Gigabytes\n";
				break;

			case 4:
				cout<<"Enter Gigabytes to be converted: ";
				cin>> GB;
				cout<<"\n";
				TB = GB * 0.0009765625;
				cout<<GB<<" Gigabytes = "<<TB<<" Terrabytes\n";
				break;

			case 5:
				cout<<"Enter Terrabytes to be converted: ";
				cin>> TB;
				cout<<"\n";
				PB = TB * 0.0009765625;
				cout<<TB<<" Terrabytes = "<<PB<<" Petabyte\n";
				break;

			case 6:
				cout<<"Enter Petabytes to be converted: ";
				cin>> PB;
				cout<<"\n";
				EB = PB * 0.0009765625;
				cout<<PB<<" Petabytes = "<<EB<<" Exabytes\n";
				break;

			case 7:
				cout<<"Enter Exabytes to be converted: ";
				cin>>EB;
				cout<<"\n";
				ZB = EB * 0.0009765625;
				cout<<EB<<" Exabytes = "<<ZB<<" Zettabytes\n";
				break;
				
			case 8:
				cout<<"Enter Zettabytes to be converted: ";
				cin>>ZB;
				cout<<"\n";
				YB = ZB * 0.0009765625;
				cout<<ZB<<" Zettabytes = "<<YB<<" Yottabytes\n";
				break;

			case 9:
				cout<<"Enter Bits to be converted: ";
				cin>>Bit;
				cout<<"\n";
				KB = Bit * 0.0001220703125;
				cout<<Bit<<" Bits = "<<KB<<" Kilobytes\n";
				break;

			case 10:
				cout<<"Enter Bits to be converted: ";
				cin>>Bit;
				cout<<"\n";
				MB = Bit * 1.1920928955078125e-7;
				cout<<Bit<<" Bits = "<<MB<<" Megabytes\n";
				break;

        case 11:
        exit();
        break;

        default:
        cout<<"Choose the Option between 1 to 11";
        break;
			}
      cout<<"\n\tDo you want to Continue Data Unit Converter? Y/N :: ";
      cin>>chr;
      cout<<"-----------------------------"<<endl<<endl; /* code */
    } while (chr == 'Y' ||chr =='y');
}

int main()
{
    DUC();
}