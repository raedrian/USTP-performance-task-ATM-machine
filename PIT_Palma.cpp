#include <iostream>
using namespace std;
#define OFFICIALPIN 1234
int main()
{
	char choice, decision;
	int pin,officialpin, tries=1;
	double cash, money;
	bool trapin = true, trap = true, trap2 = true, trap3 = true, trap4 = true;
	
	
	
	
	cash = 5000.0;	
do{
		cout 	<< "Welcome to USTP Bank" << endl
		<< "Please enter your PIN to continue: ";
		cin >> pin;
	if (pin == OFFICIALPIN)
		{
			system("cls");
			trapin = true;
		do
			{

	cout 	<<"**************************************************************"<< endl
		 	<<"Welcome to USTP Bank"<< endl
		 	<<"Please select a transaction"<< endl 
		 	<<"(a) Check Balance"<< endl
		 	<<"(b) Withdraw Money"<< endl
			<<"(c) Deposit Money"<< endl
			<<"(d) End Transaction"<< endl
			<<"**************************************************************"<< endl;
	cout << "Enter the letter of choice: ";
	cin >> choice;

switch (choice)
	{
	case 'a' :
			
				cout << "Your balance is: " << cash << endl
				<< "Would you like to have another transaction? (y/n) ";
				cin >> decision;
				if (decision == 'y')
				{
				
					trap = false;
					system("cls");
					
				}
				
				else 
				{
					system("cls");
					cout << endl << "Thank you for Banking with us!" << endl;
					return 0;
					trap = true;
				}
			break;
		
	case 'b' : 
			cout << "Please enter the amount you are to withdraw: ";
			cin >> money;
	
	if (money > cash)
	{
		cout << "You have insufficient balance. Please try again.";
				system("PAUSE");
				system("cls");
				trap2 = false;
				trap = false;
	}
	else {
		do
		{
		cash = cash - money;
		
			if (cash < 2000.0 && !(cash < 0))
			{
				cout << "You must have a maintaining balance of 2000 Pesos. " <<endl << "Please deposit money to be able to withdraw.";
				cash = cash + money;
				trap2 = true;
				trap = false;
				system("PAUSE");
				system("cls");
				break;
				
			}
				
			else {
				cash = cash + money;
				
			}
				
			if (money < cash)
				{
					cash = cash - money;
					cout << "You have withdrawn " << money << " Pesos" << endl
					<< "Remaining Balance: " << cash << " Pesos" << endl
					<< "Would you like to have another transaction? (y/n) ";	
			do
			{
				cin >> decision;
					if(decision == 'y')
					{
						trap3= false;
						trap2 = true;
						trap = false;
						system("cls");
					}
					else if (decision == 'n')
					{
						system("cls");
						cout << endl << "Thank you for Banking with us!" << endl;
						return 0;
						trap = true;
					}
					else 
					{
						cout << "Invalid input. Would you like to have another transaction? (y/n)";
						trap3 = true;
					}
			}while(trap3==true);
				}	
			
		}while (trap2==false);
			break;		
		
		
		case 'c':
			cout << "Please enter the amount you are to deposit: ";
			cin >> money;
			
			cash = cash + money;
			
			cout << "You have deposited " << money << endl << "Your current balance is: " << cash << " Pesos" << endl
			<< "Would you like to have another transaction? (y/n) ";
			do
			{
				cin >> decision;
					if(decision == 'y')
					{
						trap4= false;
						trap = false;
						system("cls");
					}
					else if (decision == 'n')
					{
						system("cls");
						cout << endl << "Thank you for banking with us!" << endl;
						return 0;
						trap = true;
					}
					else 
					{
						cout << "Invalid input. Would you like to have another transaction? (y/n)";
						trap4 = true;
					}
			}while(trap4==true);
			break;

		case 'd' :
			system("cls");
			cout << endl << "Thank you for Banking with us!" << endl;
			trap = true;
			break;
		default :
			cout << "Invalid input. Please try again. ";
			trap = false;
			system("cls");
			
		}	
	}
}while(trap==false);
				
		}
		else if (tries < 3)
		{
			cout << "You have entered the incorrect PIN. Please try again. ";
			tries = tries + 1;
			system("PAUSE");
			system("cls");
			trapin = false;
		}
		else if (tries == 3)
		{
			system("cls");
			cout << "You have reached the maximum tries." << endl << "The ATM will now eject your card." << endl << "Thank you for banking with us!";
			return 0;
		}
		}while(trapin==false);
		
	return 0;	
}
