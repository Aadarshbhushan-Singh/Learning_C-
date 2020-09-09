#include <iostream>
#include <math.h>
using namespace std;
class distances{
    public:
    float dist;
    int x1, y1, x2, y2;
    distances (int, int, int, int);
    void display(){
        cout<<"The distance is: "<<dist;
    }
    
};
distances::distances(int x1, int y1, int x2, int y2){
    dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
};

int main(){
    distances d1(1,0,70,0);
    d1.display();
    return 0;
};