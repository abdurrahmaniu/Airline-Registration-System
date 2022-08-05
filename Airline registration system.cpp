#include<iostream>
#include<fstream>
#include<iomanip>


using namespace std;

void mainMenu();

class Managment
{
	public:
		
		Managment()
		{
			mainMenu();
		}
};

class Details
{
	public:
		static string name,gender;
		int phoneNo;
		int age;
		string add;
		static int cId;
		char arr[100];
		
		void information()
		{
			cout<<"\nEnter the customer ID:";
			cin>>cId;
			cout<<"\nEnter the name :";
			cin>>name;
			cout<<"\nEnter the age :";
			cin>>age;
			cout<<"\nAddress :";
			cin>>add;
			cout<<"\nEnter the name :";
			cin>>gender;
			cout<<"Your details are saved with us\n"<<endl;
			
		}	

};

int Details::cId;
string Details::name;
string Details::gender;

class registration
{
	public:
		static int choice;
		int choice1;
		int back;
		static float charges;
		
		void flights()
		{
			string flightN[]={"Dubai","Canada","Uk","USA","Australia","Europe"};
			
			for(int a=0;a<6;a++)
			{
				cout<<(a+1)<<".flight to"<<flightN[a]<<endl;
			}
			
			switch(choice)
			{
				case 1:
				{
					
				cout<<"__________________Welcome to Dubai Emirates__________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				
				
				cout<<"1. DUB -498"<<endl;
				cout<<"\t08-01-2022 8:00AM 10hrs Taka. 14000"<<endl;
				cout<<"1. DUB -658"<<endl;
				cout<<"\t09-01-2022 4:00AM 12hrs Taka. 14000"<<endl;
				cout<<"1. DUB -508"<<endl;
				cout<<"\t08-01-2022 11:00AM 11hrs Taka. 9000"<<endl;
				
				cout<<"\nSelect the flight you want to back :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=14000;
					cout<<"\nYou have sucessfully booked the flight DUB - 498"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=10000;
					cout<<"\nYou have sucessfully booked the flight DUB - 658"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==3)
				{
					charges=9000;
					cout<<"\nYou have sucessfully booked the flight DUB - 508"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"Invalid input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu: "<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
		   }
		   
		   case 2:
		   	{
					
				cout<<"__________________Welcome to Canada Airlines__________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				
				
				cout<<"1. CA -198"<<endl;
				cout<<"\t09-01-2022 2:00PM 20hrs Taka. 34000"<<endl;
				cout<<"1. DUB -158"<<endl;
				cout<<"\t11-01-2022 6:00AM 23hrs Taka. 39000"<<endl;
				cout<<"1. DUB -108"<<endl;
				cout<<"\t14-01-2022 12:00AM 21hrs Taka. 40000"<<endl;
				
				cout<<"\nSelect the flight you want to back :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=34000;
					cout<<"\nYou have sucessfully booked the flight CA - 198"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=39000;
					cout<<"\nYou have sucessfully booked the flight CA - 158"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==3)
				{
					charges=40000;
					cout<<"\nYou have sucessfully booked the flight CA - 108"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"Invalid input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu: "<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
		   }
				case 3:
				{
					
				cout<<"__________________Welcome to Uk Airways__________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1. UK -798"<<endl;
				cout<<"\t12-01-2022 10:00Am 14hrs Taka. 44000"<<endl;
				
				cout<<"\nSelect the flight you want to back :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=44000;
					cout<<"\nYou have sucessfully booked the flight DUB - 498"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"Invalid input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu: "<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
		   }
		   
		  case 4:
		  		{
					
				cout<<"__________________Welcome to US Airways__________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				cout<<"1. US -567"<<endl;
				cout<<"\t10-01-2022 ():00AM 22hrs Taka. 37000"<<endl;
				cout<<"1. DUB -658"<<endl;
				cout<<"\t11-01-2022 6:00AM 22hrs Taka. 39000"<<endl;
				cout<<"1. DUB -508"<<endl;
				cout<<"\t14-01-2022 12:00AM 21hrs Taka. 42000"<<endl;
				
				cout<<"\nSelect the flight you want to back :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=37000;
					cout<<"\nYou have sucessfully booked the flight CA - 198"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=39000;
					cout<<"\nYou have sucessfully booked the flight DUB - 658"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==3)
				{
					charges=42000;
					cout<<"\nYou have sucessfully booked the flight DUB - 508"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"Invalid input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu: "<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
		   }
		   
		   case 5:
		   {
					
				cout<<"__________________Welcome to Australia Airlines__________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				
				
				cout<<"1. As -698"<<endl;
				cout<<"\t18-01-2022 8:00AM 20hrs Taka. 44000"<<endl;
				cout<<"1. AS -158"<<endl;
				cout<<"\t19-01-2022 4:00AM 22hrs Taka. 34000"<<endl;
				cout<<"1. As -708"<<endl;
				cout<<"\t17-01-2022 10:00AM 21hrs Taka. 42000"<<endl;
				
				cout<<"\nSelect the flight you want to back :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=44000;
					cout<<"\nYou have sucessfully booked the flight As - 608"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=34000;
					cout<<"\nYou have sucessfully booked the flight As - 158"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==3)
				{
					charges=42000;
					cout<<"\nYou have sucessfully booked the flight as - 708"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"Invalid input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu: "<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
		   }
		   {
					
				cout<<"__________________Welcome to European Airlines__________\n"<<endl;
				cout<<"Your comfort is our priority.Enjoy the journey!"<<endl;
				
				cout<<"Following are the flights \n"<<endl;
				
				
				
				cout<<"1. EU -898"<<endl;
				cout<<"\t02-01-2022 2:00AM 18hrs Taka. 36000"<<endl;
				cout<<"1. EU -958"<<endl;
				cout<<"\t03-01-2022 6:00AM 19hrs Taka. 37000"<<endl;
				cout<<"1. EU -608"<<endl;
				cout<<"\t12-01-2022 10:00AM 20hrs Taka. 31000"<<endl;
				
				cout<<"\nSelect the flight you want to back :";
				cin>>choice1;
				
				if(choice1==1)
				{
					charges=36000;
					cout<<"\nYou have sucessfully booked the flight EU - 898"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==2)
				{
					charges=37000;
					cout<<"\nYou have sucessfully booked the flight EU - 958"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else if(choice1==3)
				{
					charges=31000;
					cout<<"\nYou have sucessfully booked the flight EU - 608"<<endl;
					cout<<"You can go back to menu and take the ticket"<<endl;
				}
				else
				{
					cout<<"Invalid input, shifting to the previous menu"<<endl;
					flights();
				}
				cout<<"Press any key to go back to the main menu: "<<endl;
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
		   }
		   default :
		   	{
		   		cout<<"Invalid input, Shifting you to the main menu !"<<endl;
		   		mainMenu();
		   		break;
			   }
        }
}
};

float registration::charges;
int registration::choice;

class ticket : public registration, Details

{
	public:
		void Bill()
		{
			string destinations="";
			ofstream outf("records.txt");
			{
				outf<<"___________XYZ Airlines________________"<<endl;
				outf<<"___________ Ticket________________"<<endl;
				outf<<"____________________________________"<<endl;
				
				outf<<"Customer ID:"<<Details::cId<<endl;
				outf<<"Customer Name:"<<Details::name<<endl;
				outf<<"Customer Gender:"<<Details::gender<<endl;	
				outf<<"\tDescription"<<endl<<endl;
				
				
				if(registration::choice==1)
				{
					destinations="Dubai";
				}
				else if(registration::choice==2)
				{
					destinations="Canada";
				}
				else if(registration::choice==3)
				{
					destinations="UK";
				}
				else if(registration::choice==4)
				{
					destinations="USA";
				}
				else if(registration::choice==5)
				{
					destinations="Australia";
				}
				else if(registration::choice==6)
				{
					destinations="Europe";
				}
				
				outf<<"Destinations\t\t"<<destinations<<endl;
				outf<<"Flight cost :\t\t"<<registration::charges<<endl;	
				
			}
			outf.close();
		}
		void dispBill()
		{
			ifstream ifs("records.txt");
			{
				if(!ifs)
				{
					cout<<"File error!"<<endl;
					
				}
				while(!ifs.eof())
				{
					ifs.getline(arr, 100);
					cout<<arr<<endl;
				}
			}
			ifs.close();
		}
		
};
void mainMenu()
{
	int lchoice;
	int schoice;
	int back;
	
	cout<<"\t                       XYZ Airline \n"<<endl;
	cout<<"\t_______________________Main Menu_______"<<endl;
	
	cout<<"\t______________________________________________"<<endl;
	cout<<"\t|\t\t\t\t\t\t|"<<endl;
	
	cout<<"\t|\t Press 1 to add the Customer Details    \t|"<<endl;
	cout<<"\t|\t Press 2 to for the Flight Registrations \t|"<<endl;
	cout<<"\t|\t Press 3 to for the Ticket and Charges    \t|"<<endl;
	cout<<"\t|\t Press 4 to Exits                          \t|"<<endl;
	cout<<"\t______________________________________________"<<endl;
	
	
	cout<<"Enter the choice : ";
	cin>>lchoice;
	
	Details d;
	registration r;
	ticket t;
	
	
	switch(lchoice)
	{
		case 1:
			{
				cout<<"_________________Customers____________\n"<<endl;
				d.information();
				cout<<"Press 1 to go nback to Main menu";
				cin>>back;
				
				if(back==1)
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				break;
			}
		case 2:
			{
				cout<<"_________Book a flight using this system____________\n"<<endl;
				r.flights();
				break;
				
			}
		case 3:
			{
			
			cout<<"______GET YOUR TICKET______\n"<<endl;
			t.Bill();
			
			cout<<"Your ticket is printed, you can colect it \n"<<endl;
			cout<<"Press 1 to display your ticket ";
			
			cin>>back;
			
			if(back==1)
			{
				t.dispBill();
				cout<<"Press any key to go back to main menu:";
				cin>>back;
				if(back==1 )
				{
					mainMenu();
				}
				else
				{
					mainMenu();
				}
				
			}
			else
			{
				mainMenu();
			}
			break;
    	}
	case 4:
		{
			cout<<"\n\n\t_______Thank-you______"<<endl;
			break;
		}
		
		default:
		{
			cout<<"Invalid input, Please try again!\n"<<endl;
			mainMenu();
			break;
		}
    }
}




int main(){
	Managment Mobj;
	return 0;
}
