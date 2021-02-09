#include <iostream>
#include <string>
using namespace std;

class student {
    private:
        int gr_no;
        //char[20] name;
    public:
        string name;
        student() {             //default constructor
            name = "classified";  
        }
        student(string s) {     //parameterized constructor
            name = s;
        }
        int roll_no;
        void set_n(int a,int b) {
            gr_no = a;
            roll_no = b;
        }
        void get_n () {
            cout<<"The student "<<name<<"'s gr no is "<<gr_no<<" and the roll no is "<<roll_no<<endl;
        }


};

class exam : public student {
    protected :
        int exam_seat_num;
    public:
        int eng_marks;
        int math_marks;
        void set_marks(float r, float t) {
            eng_marks = r;
            math_marks = t;            
        }
        void get_marks(void) {
            cout<<"The marks obtained by student "<<name<<" is "<<eng_marks<<" and "<<math_marks<<endl;
        }
};

class results : public exam {
    public :
        float percentage;
        void display_results() {
            int tot_marks = eng_marks + math_marks;
            cout<<"The result of "<<name<<" is "<<(float(tot_marks)/20)*100<<"%"<<endl;
        }
};


int main() {
    student s("Joey");
    //s.name = "Joey";
    s.set_n(1,2);
    s.get_n();
    exam s1;
    s1.name = "JOEY";
    s1.set_marks(3,4);
    s1.get_marks();
    results joeeey;
    joeeey.name = "joeeeeeeeeey";
    joeeey.set_marks(5,6);
    joeeey.display_results();
    return 0;
}