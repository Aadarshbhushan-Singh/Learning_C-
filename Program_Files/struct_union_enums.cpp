#include <iostream>
#include <string.h>
using namespace std;
struct employee{
    string name;
    int age;
    float weight;
    string favchar;
};
union money{
    int amount;
    float pounds;
    char favchar;
};

int main(){
    struct employee aadarsh;
    aadarsh.name="Aadarsh Singh";
    aadarsh.age=20;
    aadarsh.weight=70.08;
    aadarsh.favchar="Robert Downy Jr.";
    cout<<aadarsh.name<<endl;
    cout<<aadarsh.age<<endl;
    cout<<aadarsh.weight<<endl;
    cout<<aadarsh.favchar<<endl;

    union money m1;
    // m1.amount=1000;  Only one attribute from union can be assigned their value.
    // cout<<m1.amount<<endl;
    // m1.pounds=10.34<<endl;
    // cout<<m1.pounds<<endl;
    m1.favchar='w';
    cout<<m1.favchar;

    enum meal {breakfast, lunch, dinner}; //This will return 0, 1 and 2;
    cout<<endl<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    cout<<lunch+dinner;

    
    

    return 0;
}