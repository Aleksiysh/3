#include <iostream>
#include <string>
#include "Struct.h"

#include <clocale>
#include <windows.h>

using namespace std;

void _Segment() {
	Point p1(2, 4);
	Point p2(5, 6);
	Segment s(p1, p2);
	Point mp = midpoint(s);
	Point mp1 = s.midpoint();
}
void arr() {
	myIntArray *a= new myIntArray(10);
	int m = a->getElement(2);
	int n = a->getElement(2);

}
//Работа с конструктором
void constructors() {
	/*Point p1, p2(2),p3(3,4),p4=5;
	cout <<"p1: ("<< p1.x << "," << p1.y<<")\n"<<endl;
	cout <<"p2(2): ("<< p2.x << "," << p2.y<<")\n"<<endl;
	cout <<"p3(3,4): ("<< p3.x << "," << p3.y<<")\n"<<endl;
	cout <<"p4=5: ("<< p4.x << "," << p4.y<<")\n"<<endl;
	Segment s1, s2(p3), s3(4), s4(p2, p3), s5 = 7;
	cout << "s1: (" << s1.p1.x << "," << s1.p1.y << "),(" << s1.p2.x << "," << s1.p2.y <<
		")\nLength:  " << lenght(&s1)<<"\n" << endl;
	cout << "s2(p3): (" << s2.p1.x << "," << s2.p1.y << "),(" << s2.p2.x << "," << s2.p2.y <<
		")\nLength:  " << lenght(&s2) << "\n" << endl;
	cout << "s3(4): (" << s3.p1.x << "," << s3.p1.y << "),(" << s3.p2.x << "," << s3.p2.y <<
		")\nLength:  " << lenght(&s3) << "\n" << endl;
	cout << "s4(p2,p3): (" << s4.p1.x << "," << s4.p1.y << "),(" << s4.p2.x << "," << s4.p2.y <<
		")\nLength:  " << lenght(&s4) << "\n" << endl;
	cout << "s5=7: (" << s5.p1.x << "," << s5.p1.y << "),(" << s5.p2.x << "," << s5.p2.y <<
		")\nLength:  " << lenght(&s5) << "\n" << endl;

	IntArray a(5);*/

	String str("1234");
	String s2(" 09");
	str.append(s2);
	s2.append(s2);

	Cls d('c', 10.5, 5);
	//char b;
	d.get_c(d);
	cout << d.get_d(d) << endl;

	myIntArray *a = new myIntArray(10);
	a->print();
	a->setElement(3, 6);
	a->print();
	for (int i = 0; i < a->get_size(); i++)
		a->setElement(i, 10 - i);
	a->print();
	a->resize(20);
	a->print();
	a->resize(3);
	a->print();
	delete  a;

	myIntArray  *b = new myIntArray[10];
	b[0].print();
	b[0].resize(5);
	b[0].print();
	delete[] b;

	void *p = alloca(sizeof(myIntArray));
	myIntArray *c = new (p) myIntArray(10);
	c->~myIntArray();

}
//Classes
void classes() {

}
//Const
void constant() {
	double const pi = 3.1415926535;
	int const day_seconds = 24 * 60 * 60;
	int const days[12] = { 31,28,31,
							30,31,30,
							31,31,30,
							31,30,31 };

	int *may = (int *)&days[4];
	cout << days[4] << endl;
	*may = 30;

	cout << days[4] << endl;

	int a = 10;
	const int *p1 = &a; //указатель на константу
	int const *p2 = &a;	//указатель на константу
	//*p2 = 20;
	p1 = 0;

	int * const p3 = &a; //константный указатель
	*p3 = 30;
	//p3 = 0;

	int  const * const p4 = &a; //константный указатель на константу
	//*p4 = 40;
	//p4 = 0;

	//int const *const * m;
}

void constant1() {
	int a = 10;
	int *p = &a;
	//указатель на указатель const int
	//int const ** p1 = &p;
	////**p1 = 20;
	//*p1 = 0;
	//p1 = 0;

	//указатель на констрантный указатель int
	int * const *p2 = &p;
	**p2 = 30;
	//*p2 = 0;
	p2 = 0;
	//константный указатель на указатель int
	int ** const p3 = &p;
	**p3 = 30;
	*p3 = 0;
	//p3 = 0;
}
//Конструктор копирования и присваивания
void constutorCopy(){
	myIntArray a1(10);
	myIntArray a2(20);
	myIntArray a3 = a1;
	a2 = a1;
}
//Строка
void teststring() {
	String a("строка");
	String b;
	b = a;
}

void testIntArray() {
	IntArray a1(10);
	IntArray a2(5);
	//a1 = a2;
	IntArray a3 = a1;
	a1.get(0) = 6;
	int a = a1.get(0);



};

int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//constructors();
	//classes();
	//constant();
	//_Segment();
	//arr();
	//constutorCopy();
	//teststring();
	//testIntArray();
	

	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}




