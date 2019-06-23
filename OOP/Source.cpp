#include <iostream>
#include <clocale>
#include <windows.h>
#include "OOP.h"
using namespace std;

void tstPerson() {
	Person a("Вася", 25);
	Student b("Vanya", 22, "MFTI");

	Student d(a, "ddd");
	Person c = b;

	Person &l = b;
	Person *r = &b;
}



int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	tstPerson();


	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}