#include<iostream>
#include<stdio.h>
using namespace std;
class Addition {
	public:
	void add(int a,int b)
	{
		cout<<"add() method will add two number"<<endl;
		cout<<a+b<<endl;
	}

	void add(int a, int b, int c)
	{
		cout<<"add() method will add three number"<<endl;
		cout<<a+b+c<<endl;
	}
};

int main()
{
	Addition a1, a2;
	a1.add(3,4);
	a2.add(3,4,5);
	
	return 0;
}
