#include <iostream>
using namespace std;
class student{
    private:
    int rollNo;
    float weight;
    public:
    void setDetails(int rollNo, float weight){
        this->rollNo=rollNo;
        this->weight=weight;
    }
    void printDetails(){
        cout<<"Weight: "<<weight<<endl;
        cout<<"Roll No: "<<rollNo<<endl;
    }
};

int main(){
    student obj1;
    obj1.setDetails(10, 70.24);
    obj1.printDetails();


    return 0;
};