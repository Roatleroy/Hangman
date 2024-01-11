#include "Header.h"



int main() {
	Hangman Man;

	ifstream in("Words.txt");

	char guess;
	string repeat = "Y";
	bool truefalse = true;

	Man.GenerateWord(in);

	while (repeat == "y" || repeat == "Y") {

		Man.GenerateWord(in);

		while (Man.CheckWin()) {

			Man.displayMenu();
			cout << endl;
			Man.displayHangman();
			cout << endl;
			Man.displayWord();
			cout << endl;
			cout << endl;
			Man.displayguesses();
			cout << endl;
			cin >> guess;
			Man.Compare(guess);
			system("CLS");
		}

		cout << "Would you like to play again?: (Type y or Y for yes)" << endl;
		cin >> repeat;

		Man.reset();
		
		
	}

	return 0;
}