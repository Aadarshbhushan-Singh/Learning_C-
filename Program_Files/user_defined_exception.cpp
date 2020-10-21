#include <iostream>
#include <exception>
using namespace std;
class overSpeed: public exception{
    private:
    int speed;
    public:
    const char* what(){
        return "Check out your car speed \n you are in the car not in plane.";
    };
    void getSpeed(){
        cout<<"Your car speed is "<<speed<<endl;
    }
    void setSpeed(int speed){
        this->speed=speed;
    };

};

class car{
    private:
    int speed;
    public:
    car(){
        speed=0;
        cout<<"Speed is zero"<<endl;
    }
    void accelerate(){
        for (;;)
        speed+=10;
        cout<<"Speed is: "<<speed<<endl;
        if (speed>=250){
            overSpeed s;
            s.setSpeed(speed);
            throw s;
        }
    }

};

int main(){
    car c1;
    try{
        c1.accelerate();
    }catch(overSpeed s){
        cout<<s.what()<<endl;
        s.getSpeed(); 
    }

    return 0;
}