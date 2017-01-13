//
// Enumeration demo
//
#include <iostream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

int main()
{
	const int NUMSUITS = 4;
	const int MAXNUM = 13; // cards from Ace to King

	enum cardSuit { CLUBS, DIAMONDS, HEARTS, SPADES };

	//
	// deal 5 cards to a user...
	//
	int cSuit;
	int cNum;
	string ans;
	//
	// Seed the random number generator using the current time
	//
	srand(time(0));
	//
	//  While the user wants to keep playing, generate a new poker hand
	//
	do
	{
		cout << "Your Poker hand is..." << endl << endl;
		for (int i = 0; i < 5; i++)
		{
			cSuit = rand() % NUMSUITS;
			cNum = rand() % MAXNUM + 1;
			cout << setw(5);   // next 'cout' 5 characters in width

			switch (cSuit)
			{
			case CLUBS:
				if (cNum == 1)
					cout << "Ace";
				else if (cNum == 11)
					cout << "Jack";
				else if (cNum == 12)
					cout << "Queen";
				else if (cNum == 13)
					cout << "King";
				else
					cout << cNum;
				cout << " of Clubs" << endl;
				break;
			case DIAMONDS:
				if (cNum == 1)
					cout << "Ace";
				else if (cNum == 11)
					cout << "Jack";
				else if (cNum == 12)
					cout << "Queen";
				else if (cNum == 13)
					cout << "King";
				else
					cout << cNum;
				cout << " of Diamonds" << endl;
				break;
			case HEARTS:
				if (cNum == 1)
					cout << "Ace";
				else if (cNum == 11)
					cout << "Jack";
				else if (cNum == 12)
					cout << "Queen";
				else if (cNum == 13)
					cout << "King";
				else
					cout << cNum;
				cout << " of Hearts" << endl;
				break;
			case SPADES:
				if (cNum == 1)
					cout << "Ace";
				else if (cNum == 11)
					cout << "Jack";
				else if (cNum == 12)
					cout << "Queen";
				else if (cNum == 13)
					cout << "King";
				else
					cout << cNum;
				cout << " of Spades" << endl;
				break;
			default:
				cout << "Error enum out of bounds" << endl;
			}

		}
		cout << endl << "Enter \"D\"eal or \"Q\"uit (to exit)";
		cin >> ans;
	} while (ans.substr(0, 1) == "D" || ans.substr(0, 1) == "d");
	return 0;
}