#include "Header.h"

int main() {
	
	Hangman Hangman;
	int wait = 0;


	while (wait != 11) {
		cout << endl << endl;

		++wait;

		Hangman.displayHangman(wait);

	}




}