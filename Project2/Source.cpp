#include <iostream>
#include <string>
#include "Struct.h"

using namespace std;

//Работа с конструктором
void constructors() {
	Point p1, p2(2),p3(3,4),p4=5;
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
}

int main() {
	constructors();

	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}

