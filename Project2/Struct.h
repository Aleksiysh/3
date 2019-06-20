#pragma once
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

//“очка
struct Point
{
	double x;
	double y;
	//explicit // запрет не€вного конструктора от одного параметра
	Point(double x = 0, double y = 0) :x(x), y(y)
	{}
};

//**ќтрезок 
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
	//explicit // запрет не€вного конструктора от одного параметра
	Segment(double length) : p2(length, 0) {}

};

struct IntArray2D {
	//get[i][j]
	int & get(size_t i, size_t j);
	size_t a;
	size_t b;
	int *data;
};
//ƒлина отрезка
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