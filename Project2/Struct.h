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
struct Point
{
	double x;
	double y;
	Point() :x(0.0),y(0.0)
	{}
	Point(double x, double y):x(x),y(y) 
	{}
};
struct Segment
{
	Point p1;
	Point p2;
};

struct IntArray2D {
	int & get(size_t i, size_t j); 

	size_t a;
	size_t b;
	int *data;
};

double lenght(Segment *s);
