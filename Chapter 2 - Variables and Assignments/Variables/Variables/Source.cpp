#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
	//Every

  //Type	  //Instance    //Assignment
	int			Integer	  	  = 3.14159265359;
	double		Double	  	  = 3.14159265359;
	char		Character	  ='3';
	string		String	  	  ="3.14159265359";

	//Note that Integer gets rounded down.
	cout << "Integer: " << Integer << endl;

	//Double can hold up to 15 digits in exponential notation up to times +/- 10^308,
	//	but 'cout' automatically rounds the display to 6 digits. 
	cout << "Double: " << Double << endl;

	//Characters (chars) can only hold a single letter, number, or symbol from the ASCII table.
	cout << "Character: " << Character << endl;

	//Strings can hold an practically unlimited number of characters.
	cout << "String: " << String << endl;
}