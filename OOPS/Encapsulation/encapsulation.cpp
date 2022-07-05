#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
   string getname(){
        return name;
    }
    void setname(string x){
     name = x;   
    }
    int getroll(){
        return roll;
    }
    void setroll(int x){
         roll = x;
    }
    private:
      int roll;
      string name;
};

int main() {
        Student s1 =  Student();
	    	s1.setroll(2);
	    	s1.setname("isha");
		
	    	cout<<(s1.getroll());
	    	cout<<(s1.getname());
        return 0;
}
