#include "iostream"
#include <vector>
#include <string>
#include "iomanip"
#include <map>
using namespace std;

class Hangman {
public:

	//string dictionary();
	void displayMenu();
	void GenerateWord();
	void displayHangman(int count);


private:
	string Man[10] = {"(", ")", "/", "-", "-", "/", "|", "|", "-", "-"};

};