
//https://www.youtube.com/watch?v=rm4tGxWBkqs&list=PLu0W_9lII9agpFUAlPFe_VNSlXW5uE0YL&index=35&ab_channel=CodeWithHarry
//Refer to the above link if confused.
#include <iostream>
using namespace std;
// Destructors never take any argument and neither returns any value
int count=0;
class Simple{
    public:
    Simple(){
        count++;
        cout<<"This is the time whrere constructor is called: "<<count<<endl;
    }
    ~Simple(){  
        cout<<"This is the time when the destructor is called: "<<count<<endl;
        count--;
    }
    
};
int main(){
    cout<<"We are inside the main function."<<endl;
    cout<<"Creating two objects: "<<endl;
    Simple o1;
    {
        cout<<"Entering this block."<<endl;
        cout<<"Creating two more objects: "<<endl;
        Simple n1, n2;
        cout<<"Exiting this block."<<endl;
    }
    cout<<"Back to main."<<endl;
    return 0;
};