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
	Vector p(1, 2);
	Vector p1 = -p;
	Vector p2 = p1 - p;
	p = p1 + p2;
	double d = 5.6;
	Vector p3 = p1 * d;
	Vector p4 = d * p1;
	d = p3[1];
	p1++;
	++p1;
	//cout << p1;
	Vector p5;
	//cin >> p5;
	//cout << p5;

	myString str("12345");
	
}



int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//tstPerson();
	vector();

	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}