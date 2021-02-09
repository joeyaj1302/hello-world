#include <iostream>
using namespace std;

int main() {
    int arr[30] = {45,32,24,53,234};
    int *p = arr;
    for (int i =0 ; i <5 ; i++) {
        cout<<"The value of "<<i<<" is: "<<arr[i]+30<<" ,And unchanged is : "<< arr[i]<<endl ;
               
    } cout<<endl; 
    int a = 0;
    while (a<5) {
        cout<<"You can also access arr with its pointers as : "<<*p++<<endl;
        a++;
    }
    return 0;
}