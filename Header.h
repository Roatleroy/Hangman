#include "iostream"
#include <vector>
#include <string>
#include "iomanip"
#include <map>
#include <cstdlib>
#include <fstream>

using namespace std;

class Hangman {
public:

	void dictionary();
	void displayMenu();
	void GenerateWord();
	void displayHangman(int count);
	//char displayguesses();
	int returnRandomNumber();


private:
	string Man[10] = {"(", ")", "/", "-", "-", "/", "|", "|", "-", "-"};

};
