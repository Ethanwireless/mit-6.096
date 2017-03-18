// geometry.cpp
# include "geometry.h"
# include <iostream>
# include <cmath>

using namespace std;

// Point
Point::Point() {
	x = 0;
	y = 0;
}

Point::Point(int newX, int newY) {
	x = newX;
	y = newY;
}

// PointArray
PointArray::PointArray() {
	size = 0;
	points = new Point[0];
}

PointArray::PointArray(const Point points_in[], const int size_in) {
	size = size_in;
	points = new Point[size_in];
	for (int i = 0; i < size_in; i++) {
		points[i] = points_in[i];
	}
}

PointArray::PointArray(const PointArray& pv) {
	size = pv.size;
	points = new Point[size];
	for (int i = 0; i < size; i++) {
		points[i] = pv.points[i];
	}
}

PointArray::~PointArray() {
	delete[] points;
}

const int PointArray::getSize() const {
	return size;
}

void PointArray::printP() {
	for (int i = 0; i < size; i++) {
		cout << points[i].getX() << '\t' << points[i].getY() << endl;
	}
}

void PointArray::resize(int n) {
	Point *pts = new Point[size];
	int minSize = (n > size ? size : n);
	for (int i = 0; i < minSize; i++) {
		pts[i] = points[i];
	}
	delete[] points;
	size = n;
	points = pts;
}

void PointArray::clear() {
	resize(0);
}

void PointArray::push_back(const Point &p) {
	resize(size + 1);
	points[size - 1] = p; // size changed
}

void PointArray::insert(const int position, const Point &p) {
	resize(size + 1);
	for (int i = size; i > position; i--) {
		points[i] = points[i - 1];
	}
	points[position] = p;
}

void PointArray::remove(const int pos) {
	for (int i = pos; i < size - 1; i++) {
		points[i] = points[i + 1];
	}
	resize(size - 1);
}

Point *PointArray::get(const int position) {
	return position > 0 && position < size - 1 ? points + position : NULL;
}

const Point *PointArray::get(const int position) const {
	return position > 0 && position < size - 1 ? points + position : NULL;
}

// Polygon
int Polygon::numPolygons = 0;

Polygon::Polygon(const PointArray &pa) : points(pa) {
	numPolygons++;
}

Polygon::Polygon(const Point points[], const int numPoints) :
	points(points, numPoints) {
	numPolygons++;
}

Point constructorPoints[4];

Point *updateConstructorPoints(const Point &p1, const Point &p2,
                               const Point &p3, const Point &p4 = Point(0, 0)) {
	constructorPoints[0] = p1;
	constructorPoints[1] = p2;
	constructorPoints[2] = p3;
	constructorPoints[3] = p4;
	return constructorPoints;
}

// Rectangle
Rectangle::Rectangle(const Point &ll, const Point &ur)
	: Polygon(updateConstructorPoints(ll, Point(ll.getX(), ur.getY()),
	                                  ur, Point(ur.getX(), ll.getY())), 4) {}

Rectangle::Rectangle(const int llx, const int lly, const int urx, const int ury)
	: Polygon(updateConstructorPoints(Point(llx, lly), Point(llx, ury),
	                                  Point(urx, ury), Point(urx, lly)), 4) {}

double Rectangle::area() const {
	int length = points.get(1)->getY() - points.get(0)->getY();
	int width = points.get(2)->getX() - points.get(1)->getX();
	return std::abs((double)length * width);
}

Triangle::Triangle(const Point & a, const Point & b, const Point & c)
	: Polygon(updateConstructorPoints(a, b, c), 3) {}

double Triangle::area() const {
	int dx01 = points.get(0)->getX() - points.get(1)->getX(),
	    dx12 = points.get(1)->getX() - points.get(2)->getX(),
	    dx20 = points.get(2)->getX() - points.get(0)->getX();
	int dy01 = points.get(0)->getY() - points.get(1)->getY(),
	    dy12 = points.get(1)->getY() - points.get(2)->getY(),
	    dy20 = points.get(2)->getY() - points.get(0)->getY();

	double a = std::sqrt(dx01 * dx01 + dy01 * dy01),
	       b = std::sqrt(dx12 * dx12 + dy12 * dy12),
	       c = std::sqrt(dx20 * dx20 + dy20 * dy20);

	double s = (a + b + c) / 2;

	return std::sqrt( s * (s - a) * (s - b) * (s - c) );
}

// int main() {
// 	Point p1 = Point(1, 2);
// 	Point p2 = Point(3, 4);
// 	Point p3 = Point(5, 6);
// 	Point p4 = Point(7, 8);
// 	Point p5 = Point(9, 10);

// 	Point ps[] = {p1, p2, p3, p4, p5};
// 	PointArray pa = PointArray(ps, 5);

// 	Point *ptr = pa.get(3);
// 	cout << ptr->getX() << endl;
// }

