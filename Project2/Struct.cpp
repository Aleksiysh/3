#include "Struct.h"
#include <cmath>
#include <iostream>
#using namespace std;

double lenght(Segment *s) {
	double dx = s->p1.x - s->p2.x;
	double dy = s->p1.y - s->p2.y;
	return sqrt(dx*dx + dy * dy);
}

//get[i][j]
int & IntArray2D::get(size_t i, size_t j) {
	return data[i*b + j];
}
struct String {
	/* Реализуйте этот конструктор */
	String(const char *str = "") {
		size_t size = 0;
		while (*(str + size) != '\0')
			size++;
		this->size = size;
		this->str = new char[this->size + 1];
		size_t i = 0;
		for (; i < this->size; i++)
			*(this->str + i) = *(str + i);
		*(this->str + i) = '\0';
	}
	/* Реализуйте этот конструктор */
	String(size_t n, char c) :size(n) {
		this->str = new char[n + 1];
		for (size_t i = 0; i < n; i++) *(this->str + i) = c;
		*(this->str + n) = '\0';
	}
	~String() {
		delete[] str;
	}
	void append(String &other) {
		cout << other.str << endl;
	}

	size_t size;
	char *str;
};