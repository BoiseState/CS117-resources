// streamIO_ex.cpp : Defines the entry point for the console application.
//

#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;
//
// Function name: 
//		processFile
//
// Function description:
//		read words from file into vector.  
//
// Inputs:
//		in_file  - file to read words from
//		words	 - vector to hold the words
//
// Returns:
//		(by Value) Number of words/records read.
//		words (by Reference) words in the input file.
//
// Assumptions / Limitations:
//		This routine assumes 1 word per line/record.
//
int processFile(ifstream& in_file, vector<string>& words)
{
	string line;
	string inputWord;
	int cnt = 0;
	//
	// read a line from the file until EOF
	//
	//while (getline(in_file, line))
	//{
	//	if (in_file.fail())
	//	{
	//		cout << "Reading of infile failed on line: " << cnt << "." << endl;
	//		return -1;
	//	}
	//	words.push_back(line);
	//	cnt++;
	//}
	while (in_file >> inputWord)
	{
		words.push_back(inputWord);
		cnt++;
	}
		
	cout << cnt << " lines/words processed."  << endl;
	return 0;
}



int main(int argc, char* argv[])
{

	string alpha, cipher;
	string infile, outfile;
	vector<string> words;
	ifstream inputFile;
	ofstream outputFile;

	//
	// get all of the inputs...
	//
	if (argc < 2)
	{
		cout << "Incorrect number of arguments! Must specify input file name." << endl; 
		return 0;
	}
	infile = argv[1];

	if (infile.compare("-h") == 0) {  //(infile == "-h") {
		cout << "Usage: " << argv[0] << " [[-h]] infile [outfile]" << endl << endl;
		cout << "Read a file of words from infile and write the words to the screen or to outfile (if given on command line).";
		cout << "  Where " << endl << endl;
		cout << "\t -h prints this screen." << endl;
		cout << "OR" << endl;
		cout << "\t infile is the source file of words and outfile is where to write the words (if given)." << endl;
		// cout << endl << argv[0] << " " << argv[1] << " " << argv[2] << " " << argv[3] << " " << argv[4] << " " << endl;
		system("pause");
		return 1;
	}


	// open the input file and the output file
	inputFile.open(infile);
	if (inputFile.fail()) {
		cout << "Error opening input file, " << infile << ". Exiting..." << endl;
		return -1;
	}
	//
	// read the input file
	//
	processFile(inputFile, words);
	//
	// if output file is given
	//		write words to file
	// else
	//		sort words
	//		write to screen
	//
	if (argc == 3)
	{
		outfile = argv[2];
		outputFile.open(outfile);
		if (outputFile.fail()) {
			cout << "Error opening output file, " << outfile << ". Exiting..." << endl;
			return -1;
		}
		outputFile << "This is a created \"output file \" - " << outfile << "..." << endl << endl;
		string word;
		for (int i = 0; i < words.size(); i++)
		{
			word = words[i];
			outputFile << word << endl;
		}
		//
		// close the output file
		//
		outputFile.close();
	}
	else
	{
		sort(words.begin(), words.end());
		cout << "Sorted words from input file:" << endl << endl;
		for (int i = 0; i < words.size(); i++)
			cout << "word[" << i << "]: " << words[i] << endl;
	}

	// clean up be sure to close your files...

	inputFile.close();
	return 0;
}