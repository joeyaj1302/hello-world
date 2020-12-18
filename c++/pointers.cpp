#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *b = &a;
    int **c = &b;
    cout<<"The value of b is :"<<b<<endl;
    cout<<"The value of pointer b is :"<<*b<<endl;
    cout<<"The value of c is :"<<c<<endl;
    cout<<"The value of pointer  c is :"<<*c<<endl;
    cout<<"The value of pointer of pointer b is :"<<**c<<endl;
    return 0;
}