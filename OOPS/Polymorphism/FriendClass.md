A friend class can access private and protected members of other classes in which it is declared as a friend. 
It is sometimes useful to allow a particular class to access private and protected members of other classes.

In CPP:

`
class GFG {
private:
    int private_variable;
protected:
    int protected_variable;
public:
    GFG(){
        private_variable = 10;
        protected_variable = 99;
    }

    friend class F;
};
 
// Here, class F is declared as a
// friend inside class GFG. Therefore,
// F is a friend of class GFG. Class F
// can access the private members of
// class GFG.
class F {
public:
    void display(GFG& t)
    {
        cout << "The value of Private Variable = "
             << t.private_variable << endl;
        cout << "The value of Protected Variable = "
             << t.protected_variable;
    }
};
`

In JAVA:
The concept of friends is not in Java.

In Python:
There is no privacy in Python. Everyone can access anything anyway. So there's no need for a friend function sort of concept.