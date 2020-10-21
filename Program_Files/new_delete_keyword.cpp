#include <iostream>
using namespace std;
int main(){
    int a=4;
    int* ptr=&a;
    cout<<"Value of a: "<<a<<endl;
    cout<<"Adress of a: "<<ptr<<endl; //Adress
    cout<<"Adress of a: "<<*ptr<<endl; //deferencing operator

    //new keyword
    int *p=new int(40);
    cout<<"The value of p is: "<<*p<<endl;
    
    int *arr=new int[3];
    arr[1]=10;
    arr[2]=20; //*(a+1)=20   ---> This means value of (a+1) is 20
    arr[3]=30;
    cout<<"The value of array at 1 is: "<<arr[1]<<endl;
    cout<<"The value of array at 2 is: "<<arr[2]<<endl;
    cout<<"The value of array at 3 is: "<<arr[3]<<endl;
    cout<<"The adress of arr is: "<<arr<<endl; //Will give the adress of arr
    cout<<"The adress of arr is: "<<*arr<<endl; //will return a garbage value

    //delete keyword
    delete[] arr;
    // delete arr; this lien of code can delete any index element even two or one or three
    cout<<endl<<"After delete keyword:"<<endl<<endl;
    //now this will throw garbage value because the array is deleted
    cout<<"The value of array at 1 is: "<<arr[1]<<endl;
    cout<<"The value of array at 2 is: "<<arr[2]<<endl;
    cout<<"The value of array at 3 is: "<<arr[3]<<endl;
    
    return 0;
};