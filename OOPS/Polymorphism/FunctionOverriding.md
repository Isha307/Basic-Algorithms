In CPP:

`
class Parent{
  access_modifier:
    // overridden function
    return_type name_of_the_function(){}
  };

}

  class child : public Parent {

    access_modifier:
      // overriding function
      return_type name_of_the_function(){}
    };

  }

class Parent {
public:
    void GeeksforGeeks_Print(){
        cout << "Base Function" << endl;
    }
};
 
class Child : public Parent {
public:
    void GeeksforGeeks_Print(){
        cout << "Derived Function" << endl;
        // call of overridden function
        Parent::GeeksforGeeks_Print();
    }
};

int main(){
    Child Child_Derived;
    Child_Derived.GeeksforGeeks_Print();
}
`

In java:

`
class Parent {
	void show() { System.out.println("Parent's show()"); }
}

// Inherited class
class Child extends Parent {
	@Override void show(){
		System.out.println("Child's show()");
	}
}

// Driver class
class Main {
	public static void main(String[] args)
	{
		// If a Parent type reference refers
		// to a Parent object, then Parent's
		// show is called
		Parent obj1 = new Parent();
		obj1.show();

		// If a Parent type reference refers
		// to a Child object Child's show()
		// is called. This is called RUN TIME
		// POLYMORPHISM.
		Parent obj2 = new Child();
		obj2.show();
	}
}
`

In Python:

`
class Parent():
      
    # Constructor
    def __init__(self):
        self.value = "Inside Parent"
          
    # Parent's show method
    def show(self):
        print(self.value)
          
# Defining child class
class Child(Parent):
      
    # Constructor
    def __init__(self):
        self.value = "Inside Child"
          
    # Child's show method
    def show(self):
        print(self.value)
          
          
# Driver's code
obj1 = Parent()
obj2 = Child()
  
obj1.show()
obj2.show()
`