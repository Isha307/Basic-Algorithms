#include <bits/stdc++.h>
using namespace std;
/*
1=addition
2=subtraction
3=multiplication
4=division
*/
double calculate( double x, double y, int choice){
    switch(choice){
        case 1:return x+y;
        case 2:return x-y;
        case 3:return x*y;
        case 4:return x/y;
        case 99:exit(0);
        default:
            cout<<"Enter correct choice"<<endl;
            break;
    }
    return 0;
}

int main(){
    int choice;
    cout<<"Enter your choice to perform suitable operation(99to exit)"<<endl;
    cout<<"1 for addition"<<endl;
    cout<<"2 for subtraction"<<endl;
    cout<<"3 for multiplication"<<endl;
    cout<<"4 for division"<<endl;
    double x, y;
    do{
        cout<<"choice: ";
        cin>>choice;
        cout<<"Enter value of x: ";
        cin>>x;
        cout<<"Enter value of y: ";
        cin>>y;
        cout<<"result = "<<calculate(x,y,choice)<<endl;
    }while(choice!=99);
    return 0;
}