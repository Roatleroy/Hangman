#include "Header.h"



int main() {
	Hangman Man;

	ifstream in("Words.txt");

	Man.GenerateWord(in);


	return 0;
}