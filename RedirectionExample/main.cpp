// Instructor:	D. Thompson
// Due Date:	6/1/15

#include <stdio.h>
#include <string.h>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main(int argc, char* argv[])
{
    string word;
    bool done = false;
    int count = 0;

	cout << "Enter words, 1 per line, end words with \"end\": ";
//    cin >> barcode;

//    while( !(cin.peek() == EOF) )
    while( !done && getline(cin, word) )
//    while(!done && (cin >> word) )
    {
        if (word.compare("end")== 0)
            done = true;
        else
        {
            cout << "The input word is : " << word << endl;
            count++;
        }
    }
    cout << "read " << count << " words..." << endl;
    system("pause");
    return 0;
}



