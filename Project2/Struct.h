#pragma once
struct Point_
{
	double x;
	double y;
	Point_() {
		x = y = 0;
	}
	Point_(double x, double y) {
		this->x = x;
		this->y = y;
	}
};
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
struct Segment
{
	Point p1;
	Point p2;
	Segment() {}
	Segment(Point p1, Point p2) :p1(p1), p2(p2) {}
	Segment(Point p) :p1(0, 0), p2(p) {}
	//explicit // запрет неявного конструктора от одного параметра
	Segment(double length) : p2(length, 0) {}
	double  lenght();
	Point midpoint();
};
//Середина отрезка
Point midpoint(Segment const & a);
//Длина отрезка
double lenght(Segment *s);
//двумерный массив
struct IntArray2D {
	//get[i][j]
	int & get(size_t i, size_t j);
	size_t a;
	size_t b;
	int *data;
};
//одномерный массив
struct myIntArray
{
	explicit myIntArray(size_t size=0);	
	myIntArray(myIntArray const &a);		//конструктор копирования
	
	~myIntArray();
	void resize(size_t new_size);
	int & getElement(size_t i);
	int getElement(size_t i) const;
	void setElement(size_t i, int value);
	void print();
	myIntArray &operator= (myIntArray const &a);
	size_t get_size() const {
		return this->size_;
		//this->size = 0;
	}
private:
	size_t size_;
	int * data_;
};

struct String {
	String(const char *str = "");
	String(size_t n, char c);
	~String();
	void append(String &other);
	//конструктор копирования
	String(const String &other);
	//оператор присваивания
	String &operator=(const String &other);
private:
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

struct IntArray {
	explicit IntArray(size_t size);
	IntArray(IntArray const &a);
	~IntArray();
	IntArray & operator = (IntArray &a);
	void swap(IntArray &a);
	size_t size() const ;
	int get(size_t i) const;
	int & get(size_t i);
	void resize(size_t nsize);
private:
	size_t size_;
	int * data_;
};

