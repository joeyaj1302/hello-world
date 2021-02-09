#include <iostream>
using namespace std;

int fact (int n) {
    if (n<=1) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}

void g() {
    cout<<"Hello world";
}
void swapref( int &a , int &b) {
    cout<<"\nThe address of a is \n"<<&a<<endl;
    cout<<"The value at a is :\n"<<a<<endl;
    int temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 15;
    g();
    cout<<"\nThe address of x is \n"<<&x;
    swapref(x,y);
    cout<<"\nThe numbers after swapping are :"<<x << " and "<<y<<endl;
    cout<<"The factorial of 5 is "<<fact(5)<<endl;
    return 0;
}