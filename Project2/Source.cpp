#include <iostream>
#include <string>
#include "Struct.h"

using namespace std;


int main() {
	Point p1(1,2),p2(2,3);
	//cout << p1.x << " " << p2.y<<endl;
	Segment s(p1,p2);
	cout << "("<<s.p1.x << ","<<s.p1.y << "),(" << s.p2.x << ","<< s.p2.y << 
		")\nLength:  "<<lenght(&s)<< endl;
	cin.get();
	cout << "\n Press Enter";
	cin.get();
	return 0;
}