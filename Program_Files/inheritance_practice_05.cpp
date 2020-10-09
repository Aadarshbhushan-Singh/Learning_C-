#include <iostream>
using namespace std;
class std_basic_info{
    private:
    char name[10];
    int age, grade;
    public:
    void get_std_basic_info(){
        cout<<"Enter the name: ";
        cin>>name;
        cout<<"Enter the age: ";
        cin>>age;
        cout<<"Enter the grade: ";
        cin>>grade;
    }
    void print_std_basic_info(){
        cout<<"Name: "<<name<<endl;
        cout<<"Age: "<<age<<endl;
        cout<<"Grade: "<<grade<<endl;
    }
};

class std_marks_info: public std_basic_info{
    private:
    int physics, maths, chemistry;
    public:
    void get_std_marks_info(){
        cout<<"Enter the Physics marks: ";
        cin>>physics;
        cout<<"Enter the chemistry marks: ";
        cin>>chemistry;
        cout<<"Enter maths marks: ";
        cin>>maths;
    }
    void print_std_marks_info(){
        cout<<"Physics: "<<physics<<endl;
        cout<<"Chemistry: "<<chemistry<<endl;
        cout<<"Maths: "<<maths<<endl;
    }
};
int main(){
    std_marks_info std1;
    std1.get_std_basic_info();
    std1.get_std_marks_info();
    std1.print_std_basic_info();
    std1.print_std_marks_info();

    return 0;
};