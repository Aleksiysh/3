﻿#pragma once
//struct Point_
//{
//	double x;
//	double y;
//	Point_() {
//		x = y = 0;
//	}
//	Point_(double x, double y) {
//		this->x = x;
//		this->y = y;
//	}
//};

//Точка
struct Point
{
	double x;
	double y;
	//explicit // запрет неявного конструктора от одного параметра
	Point(double x = 0, double y = 0) :x(x), y(y)
	{}
};

//**Отрезок 
//Segment(Point p1,Point p2)
//Segment(Point p2)
//Segment(double length)
struct Segment
{
	Point p1;
	Point p2;
	Segment() {}
	Segment(Point p1, Point p2) :p1(p1), p2(p2) {}
	Segment(Point p) :p1(0, 0), p2(p) {}
	//explicit // запрет неявного конструктора от одного параметра
	Segment(double length) : p2(length, 0) {}

};

struct IntArray2D {
	//get[i][j]
	int & get(size_t i, size_t j);
	size_t a;
	size_t b;
	int *data;
};
//Длина отрезка
double lenght(Segment *s);

struct IntArray
{
	explicit IntArray(size_t size)
		:size(size)
		, data(new int[size])
	{}
	size_t size;
	int * data;
};
struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();
	void append(String &other);

	size_t size;
	char *str;
};



struct Cls {
	Cls(char c, double d, int i):c(c),d(d),i(i) {};
private:
	char c;
	double d;
	int i;
public:
	// Эта функция должна предоставить доступ к полю c объекта cls.
	// Обратите внимание, что возвращается ссылка на char, т. е.
	// доступ предоставляется на чтение и запись.
	char &get_c(Cls &cls) {
		return *(char*)&cls;
	}
	double &get_d(Cls &cls) {
		return *(double*)(char*)(&cls+1);
	}
	
};

