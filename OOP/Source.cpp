#include <iostream>
#include <clocale>
#include <windows.h>
#include <string>
#include "OOP.h"
using namespace std;

void tstPerson() {
	Person a("Вася", 25);
	Student b("Vanya", 22, "MFTI");

	Student d(a, "ddd");
	Person c = b;

	Professor p(a);
	cout << a.name()<<endl;
	cout << p.name() << endl;

	Person *pp = &p;
	cout << pp->name() << endl;
	Person &l = b;
	Person *r = &b;
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