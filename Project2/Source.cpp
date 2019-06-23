#include <iostream>
#include <string>
#include "Struct.h"

#include <clocale>
#include <windows.h>

using namespace std;

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
	for (size_t i = 0; i < a->size; i++)
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
int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	//constructors();
	classes();

	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}




