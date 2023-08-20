1) Method Overloading: changing no. of arguments

In java:
`
class Adder{  
    static int add(int a,int b){return a+b;}  
    static int add(int a,int b,int c){return a+b+c;}  
    }  
    class TestOverloading1{  
    public static void main(String[] args){  
    System.out.println(Adder.add(11,11));  
    System.out.println(Adder.add(11,11,11));  
    }}  
`
    

In Python:

Python does not support method overloading by default. 
But there are different ways to achieve method overloading in Python. 

`
from multipledispatch import dispatch

# passing one parameter


@dispatch(int, int)
def product(first, second):
	result = first*second
	print(result)

# passing two parameters


@dispatch(int, int, int)
def product(first, second, third):
	result = first * second * third
	print(result)

# you can also pass data type of any value as per requirement


@dispatch(float, float, float)
def product(first, second, third):
	result = first * second * third
	print(result)


# calling product method with 2 arguments
product(2, 3) # this will give output of 6

# calling product method with 3 arguments but all int
product(2, 3, 2) # this will give output of 12

# calling product method with 3 arguments but all float
product(2.2, 3.4, 2.3) # this will give output of 17.985999999999997

`
In Backend, Dispatcher creates an object which stores different implementation and on runtime, it selects the appropriate method as the type and number of parameters passed.

In Cpp:

`
void add(int a, int b){
cout << "sum = " << (a + b);
}
void add(double a, double b){
	cout << endl << "sum = " << (a + b);
}
int main(){
	add(10, 2);
	add(5.3, 6.2);
}

`

2) Method Overloading: changing data type of arguments

In java:

    `class Adder{  
    static int add(int a, int b){return a+b;}  
    static double add(double a, double b){return a+b;}  
    }  
    class TestOverloading2{  
    public static void main(String[] args){  
    System.out.println(Adder.add(11,11));  
    System.out.println(Adder.add(12.3,12.6));  
    }}  
    `

In Cpp:
`
void print(int i) {
  cout<< i << endl;
}
void print(double  f) {
  cout << f << endl;
}
void print(char const *c) {
  cout << c << endl;
}
int main() {
  print(10);
  print(10.10);
  print("ten");
}
`
