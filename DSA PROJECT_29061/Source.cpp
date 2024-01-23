
#include <iostream>
#include <string>
#include <cstdlib> 
#include<iomanip> 
using namespace std;
void rules();
class guessing
{
public:
	
	int balance;
	int bettingAmount;
	int guess;
	void guessing_number()
	{
		do
		{
			cout << "Hey, enter amount to bet : $";
			cin >> bettingAmount;
			if (bettingAmount > balance)
			{
				cout << "Betting balance can't be more than current balance!\n"
					<< "\nRe-enter balance\n ";
			}
			else if (bettingAmount < 0)
			{
				cout << "Betting balance can't be negative\n"
					<< "\nRe-enter balance\n ";
			}
		} while (bettingAmount > balance || bettingAmount < 1);
		
	}
};

class shape
{
public:
	void rectangle()
	{
		for (int x = 0; x < 11; x++)
		{
			cout << "*";
		}cout << endl;
		for (int x = 0; x < 10; x++)
		{
			cout << "*" << setw(10) << "*" << endl;
		}
		for (int x = 0; x < 11; x++)
		{
			cout << "*";
		}
	}
	void pyramid()
	{
		for (int i = 1; i <= 6; ++i)
		{
			for (int j = 1; j <= i; ++j)
			{
				cout << "* ";
			}
			cout << "\n";
		}
	}
	void square()
	{
		for (int x = 0; x < 21; x++)
		{
			cout << "*";
		}cout << endl;
		for (int x = 0; x < 10; x++)
		{
			cout << "*" << setw(20) << "*" << endl;
		}
		for (int x = 0; x < 21; x++)
		{
			cout << "*";
		}
	}
	void triangle()
	{
		for (int i = 1; i <= 5; i++)
		{
			for (int j = 5-i; j > 0; j--)
				cout << " ";
			for (int k = 1; k <= i; k++)
				cout << "* ";
			cout << endl;
		}
	}
	void crosses()
	{

		for (int i = 1; i <= 9; i++)
		{
			for (int j = 1; j <= 9; j++)
			{
				if (j == i || (j == 9 - i + 1))
				{
					cout << "*";
				}
				else
				{
					cout << " ";
				}
			}
			cout << endl;
		}
	}
	void diamond()
	{
		for (int i = 0; i <= 3; i++)
		{
			for (int j = 1; j <= 3 - i; j++)
				cout << " ";
			for (int j = 1; j <= 2 * i - 1; j++)
				cout << "*";
			cout << endl;
		}
		for (int i = 3 - 1; i >= 1; i--)
		{
			for (int j = 1; j <= 3 - i; j++)
				cout << " ";
			for (int j = 1; j <= 2 * i - 1; j++)
				cout << "*";
			cout << endl;;
		}
	}
};

class choice:guessing,shape
{
public:
	int option;
	char choice;
	string sname;
	void choice_guessing()
	{
		do
		{
			cout << "\n\nEnter the starting balance to play game : $";
			cin >> balance;
			if (balance < 0)
			{
				cout << "Betting balance can't be negative\n"
					<< "\nRe-enter balance\n ";
			}
		} while (balance < 0);
		do
		{
			if (balance == 0)
			{
				cout << "\t\n\n Sorry!! You have no money to play" << endl;
				break;
			}
			system("cls");
			rules();
			cout << "\n\nYour current balance is $ " << balance << "\n";
			
			guessing_number();
			option = rand() % 6 + 1;
			switch (option)
			{
			case 1:
				rectangle();
				cout << "\n\nGuess the shape name: "; cin >> sname;
				if (sname == "rectangle" || sname == "RECTANGLE" || sname == "Rectangle")
				{
					cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 5;
					balance = balance + bettingAmount * 5;
				}
				else 
				{
					cout << "\t\t\n Sorry!! The correct answer is Rectangle, Better Luck for the next time. You lost $ " << bettingAmount << endl;
					balance = balance - bettingAmount;
				}
				break;
			case 2:
				pyramid();
				cout << "\n\nGuess the shape name: "; cin >> sname;
				if (sname == "pyramid" || sname == "PYRAMID" || sname == "Pyramid")
				{
					cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 5;
					balance = balance + bettingAmount * 5;
				}
				else
				{
					cout << "\t\t\n Sorry!! The correct answer is Pyramid, Better Luck for the next time. You lost $ " << bettingAmount << endl;
					balance = balance - bettingAmount;
				}
				break;
			case 3:
				square();
				cout << "\n\nGuess the shape name: "; cin >> sname;
				if (sname == "square"||sname=="SQUARE"||sname=="Square")
				{
					cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 5;
					balance = balance + bettingAmount * 5;
				}
				else
				{
					cout << "\t\t\n Sorry!! The correct answer is Square, Better Luck for the next time. You lost $ " << bettingAmount << endl;
					balance = balance - bettingAmount;
				}
				break;
			case 4:
				triangle();
				cout << "\n\nGuess the shape name: "; cin >> sname;
				if (sname == "triangle" || sname == "TRIANGLE" || sname == "Triangle")
				{
					cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 5;
					balance = balance + bettingAmount * 5;
				}
				else
				{
					cout << "\t\t\n Sorry!! The correct answer is Triangle, Better Luck for the next time. You lost $ " << bettingAmount << endl;
					balance = balance - bettingAmount;
				}
				break;
			case 5:
				crosses();
				cout << "\n\nGuess the shape name: "; cin >> sname;
				if (sname == "cross" || sname == "CROSS" || sname == "Cross")
				{
					cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 5;
					balance = balance + bettingAmount * 5;
				}
				else
				{
					cout << "\t\t\n Sorry!! The correct answer is Cross, Better Luck for the next time. You lost $ " << bettingAmount << endl;
					balance = balance - bettingAmount;
				}
				break;
			case 6:
				diamond();
				cout << "\n\nGuess the shape name: "; cin >> sname;
				if (sname == "diamond" || sname == "DIAMOND" || sname == "Diamond")
				{
					cout << "\n\nYou are in luck!! You have won Rs." << bettingAmount * 5;
					balance = balance + bettingAmount * 5;
				}
				else
				{
					cout << "\t\t\n Sorry!! The correct answer is Diamond, Better Luck for the next time. You lost $ " << bettingAmount << endl;
					balance = balance - bettingAmount;
				}
				break;

			}

			cout << "\n You have balance of $ " << balance << "\n";
			if (balance == 0)
			{
				cout << "You have no money to play ";
				break;
			}
			cout << "\n\n-->Do you want to play again ('Y' for yes) ? ";
			cin >> choice;

		} while (choice == 'Y' || choice == 'y');
		cout << "\n\n\tThanks for playing the game. Your balance is $ " << balance << "\n\n";

	}
};
void rules()
{
	system("cls");
	cout << "\n\n\n\t\t====== SHAPE GUESSING RULES! ======\n";
	cout << "\t1. Randomly shape appears, enter the correct name\n";
	cout << "\t2. Bet an amount from your current balance\n";
	cout << "\t3. Winner gets 5 times of the money bet\n";
	cout << "\t4. Wrong bet, and you lose the amount you bet\n\n";
}
class stack
{
public:
	string x;
	void push(string x)
	{
		getline(cin, x);
		cout << "\n\t Welcome ";
		cout << x << endl;
	}
	
};

int main()
{
	choice c1;
	stack s1;
	string playerName;
	int option;
	srand(time(0)); 
	cout << "\n\t\t ================================================\n" << "\t\t|" << setw(49) << "|";
	cout << "\n\t\t|      WELCOME TO ABRA KA DABRA LUCKY CLUB"<<setw(10)<<" | \n";
	cout << "\t\t|" << setw(50) << " | ";
	cout << "\n\t\t ================================================\n";
	cout << "\n\nWhat's your Name : ";

	s1.push(playerName);
	c1.choice_guessing();

	return 0;
}