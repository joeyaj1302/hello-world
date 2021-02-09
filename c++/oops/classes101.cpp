#include <iostream>
using namespace std;

class binary {
    private:
        void check_bin(void);
    
    public :
        string s;
        void read_binary(void);
        void binary_not(void);
};

void binary :: read_binary (void) {   // member of the class object i.e it uses the scope resolution operator
    cout<<"Enter a binary number :"<<endl;
    cin>>s;
    check_bin();
}

void binary :: check_bin(void) {
    int j = 0;
    for (int i = 0 ; i < s.length() ; i++) {
        if (s.at(i) != '0' && s.at(i) != '1') {        //s.at() is the same of indexing of string in python
            cout<<"Sorry incorrect binary number"<<endl;
            j = 1;
            break;
        }
    }
    if (j==0) {
        cout<<"You have entered a correct binary number"<<endl;
    }
}

void binary :: binary_not(void) {
    for (int i = 0 ; i < s.length() ; i++) {
        if (s.at(i) == '0' ) {     //s.at() is the same of indexing of string in python
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
    cout<<"The binary not of the binary number is :"<<s<<endl;
}  

class employee {
    private :
        int a ,b,c;
    public :
        int d,e;
        void set_data(int a1, int b1, int c1);
        void get_data() {
            cout<<"the value of a is "<<a<<endl;
            cout<<"the value of b is "<<b<<endl;
            cout<<"the value of c is "<<c<<endl;
            cout<<"the value of d is "<<d<<endl;
            cout<<"the value of e is "<<e<<endl;                
        }
};

void employee :: set_data(int a1 , int b1 ,int c1) {
    a = a1+1;
    b = b1+1;
    c = c1+2;
}

int main() {
    employee joey;
    joey.d = 10;
    joey.e = 20;
    joey.set_data(1,2,3);
    joey.get_data();
    binary bin;
    bin.read_binary();
    bin.binary_not();
    return 0;
}