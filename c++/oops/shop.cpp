#include <iostream>
using namespace std;

class shop {
    int id[100];
    int price[100];    //by default all the elements in a class are private until the public keyword
    int count;
    public :
        void counter(void) {
            count = 0;
        }
        void set_price(void) {
            cout<<"Enter the product id of product "<<count + 1<<endl;
            cin>>id[count];
            cout<<"Enter the price of product id "<<id[count]<<endl;
            cin>>price[count];
            count++;
        }
        void display_items(void) {
            for (int i = 0 ; i<count ; i++) {
                cout<<"The price of product id "<<id[i]<<" is $"<<price[i]<<endl;
            }
        }

};

int main() {
    int num;
    shop kirana;
    kirana.counter();
    cout<<"Enter the amount of products you have in the store :"<<endl;
    cin>>num;
    for (int i = 0 ; i<num ; i++) {
        kirana.set_price();
    }
    kirana.display_items();
    return 0;
}