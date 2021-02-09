#include <iostream>
#include <math.h>
using namespace std;

class point {
    int a,b;
    friend float dist (point p1 , point p2);
    public:
        void display (void) {
            cout<<"The complex number is "<<a<<"x + "<<b<<"y"<<endl;
        }
        point (int x ,int y) {       // parameterized constructor
            a = x;
            b = y;
        }
        point () {                   // default constructor which doesnt need any parameters
            a = 0;
            b = 0;
        }

        point (point &ob) {          //copy constructor which copies an object int another
            cout<<"Copy constructor is called"<<endl;
            a = ob.a;
            b = ob.b;
        }
};

float dist (point p1 ,point p2) {
    float len = sqrt(pow((p1.a - p2.a),2) + pow((p1.b - p2.b),2));
    return len;
}

int main() {
    point a(2,3);    //implicit call
    a.display();
    point b(4,6);     //explicit call is like point b = point(4,6)
    b.display();
    float l = dist(a,b);
    cout<<"The distance between two points is :"<<l<<"units"<<endl;
    point d;
    d.display();
    point t(a);         //copy constructor can be called like this
    t.display();
    point r = b;        // or it can be called like this
    r.display();
    l = dist(r,t);
    cout<<"The distance between two points is :"<<l<<"units"<<endl;
     
    return 0;
}   