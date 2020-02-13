#include <fstream>
#include <iostream>
#include <string>

#define FILE_SIZE 4096

using namespace std;

int main(int argc, char* argv[]) {
	int counter = 0;
	ifstream readFile;
	ofstream writeFile;
	string fileLines[FILE_SIZE];
	string thisLine;
	string userInput;
	
	writeFile.open(argv[1], ios::app);
	cout << "Please enter a string to append to the file:\n" << endl;
	getline(cin, userInput);
	writeFile << "\n";
	writeFile << userInput << endl;
	writeFile.close();
	
	readFile.open(argv[1]);
	while (getline(readFile, thisLine)) {
		fileLines[counter] = thisLine;
		counter++;
	}
	readFile.close();
	
	for (int i = 0; i <= counter; i++) {
		cout << fileLines[i] << endl;
	}
}