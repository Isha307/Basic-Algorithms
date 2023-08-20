Constructors typically have the same name as the class they belong to, and they are called automatically when an object is instantiated. Constructors are responsible for setting up the initial state of an object. 

There are several types of constructors:
*Default Constructor:* This is a constructor with no parameters. If you don't define any constructors in your class, the compiler will provide a default constructor that takes no arguments.

`
class MyClass {
public:
    MyClass() {
    }
};
// Creating an object with the default constructor
MyClass obj; 
`

*Parameterized Constructor:* A parameterized constructor accepts one or more parameters to initialize the object's data members.

`
class Person {
public:
    Person(std::string name, int age) {
        // Parameterized constructor
        this->name = name;
        this->age = age;
    }
private:
    string name;
    int age;
};

// Creating an object with a parameterized constructor
Person person("Alice", 30);
`

*Copy Constructor:* A copy constructor is used to create a new object as a copy of an existing object of the same class.
It is called when an object is initialized with another object of the same class.

`
class Point {
public:
    Point(int x, int y) : x(x), y(y) {
        // Parameterized constructor
    }

    Point(const Point& other) {
        // Copy constructor
        this->x = other.x;
        this->y = other.y;
    }
private:
    int x, y;
};

Point p1(1, 2);
Point p2 = p1; // Copy constructor is called
`

*Constructor Overloading:* Like any other function, constructors can be overloaded, allowing you to define multiple constructors with different parameter lists.

`
class Rectangle {
public:
    Rectangle() {
        // Default constructor
        width = 0;
        height = 0;
    }

    Rectangle(int w, int h) {
        // Parameterized constructor
        width = w;
        height = h;
    }
private:
    int width, height;
};

`