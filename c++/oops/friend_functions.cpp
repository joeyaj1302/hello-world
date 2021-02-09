#include <iostream>
using namespace std;

class Complex {
    int a,b;
    public :
    friend Complex product(Complex ob1 , Complex ob2);    //This function returns a class ie complex//can also be declared in private  
        void set_data(int c ,int d) {                               
            a = c;
            b = d;
        }
        void sum(Complex ob1 , Complex ob2  ) {
            a = ob1.a + ob2.a;
            b = ob1.b + ob2.b;
        }
        void print() {
            cout<<"the complex number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

Complex product(Complex ob1 , Complex ob2) {  //constructor function    //not a member function of the class object
    Complex d;
    d.a = (ob1.a*ob2.a - ob1.b*ob2.b) ;  // or u can just write a = , b =
    d.b = (ob1.a*ob2.b + ob1.b*ob2.a);
    cout<<"the complex number is "<<d.a<<" + "<<d.b<<"i"<<endl;
    return d;
}

int main() {
    Complex a1,b1,c1;
    a1.set_data(1,2);
    a1.print();
    b1.set_data(2,3);
    b1.print();
    c1.sum(a1,b1);
    c1.print();
    //c1.product() is invalid as product is a friend function and cannot be called from an object of the class
    Complex f = product(a1,b1);
    f.print();
    return 0;
}