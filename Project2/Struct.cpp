#include "Struct.h"
#include <cmath>
#include <iostream>
using namespace std;

double lenght(Segment *s) {
	double dx = s->p1.x - s->p2.x;
	double dy = s->p1.y - s->p2.y;
	return sqrt(dx*dx + dy * dy);
}

double Segment::lenght() {
	return sqrt(this->p1.x*this->p1.x + this->p1.y*this->p1.y);
}
Point Segment::midpoint(){
	return Point((this->p1.x + this->p2.x) / 2, (this->p1.y + this->p2.y) / 2);
}
Point midpoint(Segment const & a) {
	return Point((a.p1.x + a.p2.x) / 2, (a.p1.y + a.p2.y) / 2);
}


//get[i][j]
int & IntArray2D::get(size_t i, size_t j) {
	return data[i*b + j];
}


String::String(const char *str) {
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
String::String(size_t n, char c) :size(n)
{
	this->str = new char[n + 1];
	for (size_t i = 0; i < n; i++) *(this->str + i) = c;
	*(this->str + n) = '\0';
}
String::~String() {
	delete[] str;
}
void String::append(String &other) {
	char *tmpstr = new char[this->size + other.size + 1];
	for (size_t i = 0; i < this->size; i++)
		*(tmpstr + i) = *(this->str + i);
	for (size_t i = 0; i < other.size; i++)
		*(tmpstr + this->size + i) = *(other.str + i);
	this->size += other.size;
	*(tmpstr + this->size) = '\0';
	delete[] this->str;
	this->str = tmpstr;
}

//Методы myIntArray
myIntArray::myIntArray(size_t size)
	:size(size)
	, data(new int[size])
{
	{
		for (size_t i = 0; i < size; i++)
			*(data + i) = 0;
		cout << "Constructor" << endl;
	}
}
void myIntArray::resize(size_t new_size) {
	int * new_data = new int[new_size];
	size_t min = (new_size < this->size) ? new_size : this->size;
	size_t i = 0;
	for (; i < min; i++) {
		*(new_data + i) = *(data + i);
	}
	for (; i < new_size; i++)
		*(new_data + i) = 0;
	delete[] data;
	this->data = new_data;
	this->size = new_size;
};
int & myIntArray::getElement(size_t i) {
	return *(this->data + i);
};
int myIntArray::getElement(size_t i) const {
	return *(this->data + i);
};
void myIntArray::setElement(size_t i, int value) {
	*(this->data + i) = value;
};
void myIntArray::print() {
	for (size_t i = 0; i < this->size; i++)
		cout << *(this->data + i) << " ";
	cout << endl;
}
myIntArray::~myIntArray() {
	delete[] data;
	cout << "destructor" << endl;
}


