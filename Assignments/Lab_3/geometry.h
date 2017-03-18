// geometry.h
class Point {
private:
	int x, y;
public:
	Point();
	Point(int newX, int newY);
	~Point() {};

	int getX() const {return x;}
	int getY() const {return y;}
	void setX(const int newX) {x = newX;}
	void setY(const int newY) {y = newY;}
};

class PointArray {
private:
	int size;
	Point *points;
	void resize(int size);
public:
	// constructors
	PointArray();
	PointArray(const Point points[], const int size);
	PointArray(const PointArray& pv);

	// deconstructor
	~PointArray();

	const int getSize() const;

	// for debug
	void printP();

	void clear();

	// Add a Point to the end of the array
	void push_back(const Point &p);

	// Insert a Point at some arbitrary position (subscript) of the array,
	// shifting the elements past position to the right
	void insert(const int position, const Point &p);

	// Remove the Point at some arbitrary position (subscript) of the array,
	// shifting the remaining elements to the left
	void remove(const int pos);


	// Get a pointer to the element at some arbitrary position in the array,
	// where positions start at 0 as with arrays
	Point *get(const int position);
	const Point *get(const int position) const;
};

class Polygon {
protected:
	PointArray points;
	static int numPolygons;

public:
	Polygon(const PointArray &pa);
	Polygon(const Point points[], const int numPoints); 
	virtual double area() const = 0;
	static int getNumPolygons() {return numPolygons;}
	int getNumSides() const {return points.getSize();} const 
	PointArray *getPoints() const {return &points;}
	~Polygon() {--numPolygons;}
};

class Rectangle : public Polygon { 
public:
	Rectangle(const Point &a, const Point &b);
	Rectangle(const int a, const int b, const int c, const int d);
	virtual double area() const;
};

class Triangle : public Polygon { 
public:
	Triangle(const Point &a, const Point &b, const Point &c);
	virtual double area() const;
};








