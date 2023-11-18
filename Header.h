#pragma once

#include <iostream>
#include <fstream>
#include <locale.h>
#include <Windows.h>

using namespace std;

void findWordInFile(char* WORD) {
	ifstream fin;
	fin.open("storage.txt");
	try {
		if (!fin.is_open()) {
			throw "Возникла ошибка при открытии файла, ассортимент будет пуст";
		}
		else if (fin.peek() == EOF) {
			throw "Файл пуст, ассортимент пуст";
			fin.close();
		}
	}
	catch (const char* ex) {
		std::cout << ex << endl;
		return;
	}
}