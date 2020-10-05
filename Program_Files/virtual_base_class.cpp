#include <iostream>
using namespace std;
/*
student --> test
student --> sports
test --> result
sports --> result
*/
class student{
    protected:
        int rollNo;
    public:
        void setNumber(int a){
            rollNo=a;
        }
        void printNumber(){
            cout<<"Roll No: "<<rollNo<<endl;
        }
};

class test: virtual public student{
    protected:
        float maths, physics;
    public:
        void setMarks(float m1, float m2){
            maths=m1;
            physics=m2;
        }
    void printMarks(){
        cout<<"Maths: "<<maths<<endl;
        cout<<"Physics: "<<physics<<endl;
        
    };
};

class sports: virtual public student{ //virtual public and public virtual is same
    protected:
        float score;
    public:
    void setScore(int scr){
        score=scr;
    }
    void printScore(){
        cout<<"Score Sports: "<<score<<endl;
    }
};

class result: public test, public sports{
    private:
        float total;
    public:
    void display(){
        total=maths+physics+score;
        printNumber();
        printMarks();
        printScore();
        cout<<"Total mark of student: "<<total<<endl;

    }
};
int main(){
    result aadarsh;
    aadarsh.setNumber(12000);
    aadarsh.setMarks(78.6, 98.5);
    aadarsh.setScore(9);
    aadarsh.display();
    return 0;
};