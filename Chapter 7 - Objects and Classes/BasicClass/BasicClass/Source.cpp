/*
Creator: Tyler Christianson
Date created: 12/15
Purpose: Demonstrate basic setup of a class.
Example: An interface to help realtors manage their properties.
*/

#include<iostream>
#include<string>
#include<vector>

using namespace std;

//Class Definition
class House {
//Private members can only be used by functions in the House class.
private:
	//Member Variables
	string color;
	string address;
	int rooms;
	int baths;
	int asking_price;

//Public members can be called from an instance of the House class.
public:
	//Member functions
	void RequestAskingPrice();
	void RequestBaths();
	void RequestRooms();
	void RequestAddress();
	void RequestColor();

		//Inline function definitions are used for 
		//very, very short functions.
	int GetAskingPrice() { return asking_price; }
	int GetBaths() { return baths; }
	int GetRooms() { return rooms; }
	string GetAddress() { return address; }
	string GetColor() { return color; }

	//Default Constructor
	House()
	{}

	//Overloaded Constructor
	House(string address)
	{
		this->address = address;
	}
};

#pragma region House Functions
void House::RequestAskingPrice()
{
	cout << "Please enter the house's asking price: ";
	cin >> asking_price;
	cout << endl;
}

void House::RequestBaths()
{
	cout << "Please enter the number of bathrooms in the house: ";
	cin >> baths;
	cout << endl;
}

void House::RequestRooms()
{
	cout << "Please enter the number of rooms in the house: ";
	cin >> rooms;
	cout << endl;
}

void House::RequestAddress()
{
	cout << "Please enter the house's address: ";
	getline(cin, address);
	cout << endl;
}

void House::RequestColor()
{
	cout << "Please enter the house's color: ";
	cin >> color;
	cout << endl;
}
#pragma endregion We place these outside of the class definition to keep it easy to read.

//Helper function for displaying the menu and validating input
char get_option()
{
	string input;
	cout << "Choose an option from the menu" << endl;
	cout << "\t1) Add a house to the database" << endl;
	cout << "\t2) Select a house" << endl;
	cout << "\t3) Set the number of rooms" << endl;
	cout << "\t4) Set the number of bathrooms" << endl;
	cout << "\t5) Set the color" << endl;
	cout << "\t6) Set the asking price" << endl;
	cout << "\t7) Display house info" << endl;
	cout << "\t8) Exit database" << endl;

	cin >> input;
	if (input.length() != 1)
		get_option();
	else
		return input[0];
}

int main()
{
	vector<House> houses;
	char select_character = '1';
	int house_selected = 0;
	string input;
	while (select_character != '8')
	{
		if (houses.size() == 1)
			house_selected = 1;
		if (house_selected == 0)
			cout << "No house selected." << endl;
		else
			cout << "House #" << house_selected << " selected, with address \'" 
			<< houses[house_selected - 1].GetAddress()
			<< "\'" << endl;
		switch (select_character)
		{
		case ' ':
			select_character = get_option();
			break;
		case '1':
			cout << "Please enter the house's address: ";
			getline(cin, input);
			if(input.length() < 2)
				getline(cin, input);
			cout << endl;
			houses.push_back(House(input));
			select_character = ' ';
			break;
		case '2':
			for (int i = 0; i < houses.size(); ++i)
				cout << i + 1 << ") " << houses[i].GetAddress() << endl;
			cin >> house_selected;
			while (house_selected > houses.size() || house_selected < 1)
			{
				cout << "Invalid choice" << endl;
				cin >> house_selected;
			}
			select_character = ' ';
			break;
		case '3':
			houses[house_selected - 1].RequestRooms();
			select_character = ' ';
			break;
		case '4':
			houses[house_selected - 1].RequestBaths();
			select_character = ' ';
			break;
		case '5':
			houses[house_selected - 1].RequestColor();
			select_character = ' ';
			break;
		case '6':
			houses[house_selected - 1].RequestAskingPrice();
			select_character = ' ';
			break;
		case '7':
			cout << "Number of rooms:" <<		houses[house_selected-1].GetRooms() << endl;
			cout << "Number of bathrooms: " <<	houses[house_selected-1].GetBaths() << endl;
			cout << "Color: " <<				houses[house_selected-1].GetColor() << endl;
			cout <<  "Asking price: " <<		houses[house_selected-1].GetAskingPrice() << endl;
			select_character = ' ';
			break;
		case '8':
			return 0;
		default:
			select_character = ' ';
			break;
		}
	}
}

