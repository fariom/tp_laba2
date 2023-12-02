#include "student.h"
#include "Header.h"



void main() {
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Rus");
	char c;
	while (TRUE) {
		char* userWord;
		cout << "Введите слово для поиска:" << endl;
		userWord = getUserWord();
		findWordInFile(userWord);
		delete[] userWord;
	}
	return;
}