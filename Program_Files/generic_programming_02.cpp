#include <iostream>
using namespace std;

// Overloading function
// template <typename myType> void printing(myType x){
//     cout<<"X: "<<x<<endl;
// };

// template <typename myType> void printing(myType x, int n){
//     for (int i=0; i<n; i++)
//     cout<<"X: "<<x<<endl;
// };
struct A{
    int x;
    int y;
};

struct B{
    int x;
    double y;
};
template <class T> 
void assign_A(T a, T b, A &s1){
    s1.x=a;
    s1.y=b;
    cout<<"X "<<s1.x<<endl;
    cout<<"Y "<<s1.y<<endl;
    
};
template <class T>
void assign_B(T a, T b, B &s2){
    s2.x=a;
    s2.y=b;
    cout<<"X "<<s2.x<<endl;
    cout<<"Y "<<s2.y<<endl;
};

int main(){
    // Overloading function driver code
    // printing (10);
    // printing (11.3);
    // printing ("Aadarsh", 5);

    A s1;
    B s2;
    assign_A(5, 9, s1);
    assign_B(19,12, s2);

    return 0;
};