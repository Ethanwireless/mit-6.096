// Pointer
// Declaring Pointers
int *ptr = &x;

// Using Pointer Values
cout << *ptr;

// References
int y;
int &x = y; // Makes x a reference to, or alias of, y

// char * String
// You cannot modify string literals; to do so is
// either a syntax error or a runtime error, depending
// on how you try to do it. (String literals are loaded
// into read-only program memory at program startup.)
// You can, however, modify the contents of an array of
// characters. Consider the following example:
char courseName1[] = {’6’, ’.’, ’0’, ’9’, ’6’, ’\0’ }; // can be modified
char *courseName2 = "6.096"; // cannot be modified



// Classes
// Accessing Fields
// To access fields of instances, use variable.fieldName
// Assigning one instance to another copies all fields

// Passing classes to functions
class Point { public: double x, y; };

void offsetPoint(Point &p, double x, double y) { // works
	p.x += x;
	p.y += y;
}

int main() {
	Point p;
	p.x = 3.0;
	p.y = 4.0;
	offsetPoint(p, 1.0, 2.0); // works
	cout << "(" << p.x << "," << p.y << ")"; // (4.0,6.0)
}

// Methods: functions which are part of a class
// Implicitly pass the current instance (called by ".")

// Default copy constructor assigns all fields
// may change the original instance's value by
// change the copied instance

// struct: public by default
// class: private by default

// The -> notation just dereferences and gets a member. ptr->member is equivalent to (*ptr).member
cout << vPtr->getDesc();

// more example
class Integer {
public:
	int val;
	Integer(int val = 0) {
		this->val = val;   // this->val is a shorthand for (*this).val
	}
};

// virtual Functions
// dynamic dispatch

// // Pure virtual
class Vehicle {
	virtual const string getDesc() = 0;
};

// This implies that one can no longer create an instance of Vehicle;
// one can only create instances of Cars, Trucks, and other derived classes
// which do implement the getDesc method. Vehicle is then an abstract
// class – one which defines only an interface, but doesn’t actually implement
// it, and therefore cannot be instantiated.


// new Operator
// Another way to allocate memory, where the memory will remain allocated until you manually de-allocate it
int *x = new int;
// delete after declaring using new


// Static data members of a class are also known as “class variables,” 
// because there is only one unique value for all the objects of that class. 
// Their content is not different from one object of this class to another.

object.member
pointer->member


