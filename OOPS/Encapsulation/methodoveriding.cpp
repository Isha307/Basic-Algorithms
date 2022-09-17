// It is the redefinition of base class function in its derived class with same signature i.e return type and parameters. 


#include <bits/stdc++.h>
using namespace std;

class riding{
    public:
    void run(){
        cout<<"Hii"<<endl;
    }
};
class ride : riding{
   public:
    void run(){
        cout<<"Hiii"<<endl;
    }
};
int main() {
   riding obj;
   ride obj1;
   obj.run();
   obj1.run();
   

    return 0;
}
