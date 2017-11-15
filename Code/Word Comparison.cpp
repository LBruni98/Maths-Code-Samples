#include <iostream>
#include <string>
#include <fstream>

using namespace std;

/*
FOR:
	- string word = aplpe
	- for - word.length
			for - line.length
	apple
*/

int main() {
	char letter; // Indivdial lettrs
	string dictionary[10]; // Array has 10 words
	string line;
	
	cout << "Input letter:" << endl;
	cin >> letter;
	
	ifstream myfile; // read file
	myfile.open("Dictionary.txt"); //open file
	
	if(myfile.is_open()) { // If the file is open...
		while (myfile.good()) { //...and while the file is good
			getline(myfile, line); // Read the lines
			
			for(int i=0; i<line.length(); i++) {
				if(line[i] == letter) {
					cout << line << "\n";
				}
			}
		}
	}
	
	myfile.close();
	
	return 0;
}
