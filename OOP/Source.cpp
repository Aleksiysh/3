#include <iostream>
#include <clocale>
#include <windows.h>
#include <string>
#include "OOP.h"
using namespace std;

void tstPerson() {
	Professor a("Vasya", 56, "C++", "C++ language");
	cout << a.name() << " " << a.age() << " " << a.course() << " " << a.thesis() << " " << a.ocupation() << endl;
}
void vector() {
	Vector2D p(1, 2);
	Vector2D q = p.mult(10);
	double r = p.mult(q);
}



int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	tstPerson();
	//vector();


	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}