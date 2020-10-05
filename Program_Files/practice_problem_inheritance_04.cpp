#include <iostream>
using namespace std;
class vehicle{
    private:
    int milage, price;
    public:
    void setValueVehicle(){
        cout<<"Enter the milage: ";
        cin>>milage;
        cout<<"Enter the price: ";
        cin>>price;
    };
    void printValueVehicle(){
        cout<<"Milage: "<<milage<<endl;
        cout<<"Price: "<<price<<endl;
    }

};

class car: public vehicle{
    private:
    int ownershipCost, warranty, seatingCapacity;
    char fuelType[6];
    public:
    void setValueCar(){
        cout<<endl<<"************* Car Details ***********"<<endl;
        cout<<"Ownership Cost: ";
        cin>>ownershipCost;
        cout<<"Warranty in years: ";
        cin>>warranty;
        cout<<"Seating Capacity: ";
        cin>>seatingCapacity;
        cout<<"Fuel Type: ";
        cin>>fuelType;
    }
    void printValueCar(){
        cout<<endl<<"****** Car Details *********"<<endl;
        cout<<"Ownership Cost: "<<ownershipCost<<endl;
        cout<<"Warranty in Years: "<<warranty<<endl;
        cout<<"Seating Capacity of Car: "<<seatingCapacity<<endl;
        cout<<"Fuel Type of Car: "<<fuelType<<endl;
    }
};

class bike: public vehicle{
    private:
    int noCylinder, noGears;
    char coolingType[10];
    char wheelType[10];
    int fuelTankCapacity;
    public:
    void setValueBike(){
        cout<<endl<<"********** Bike Details ***********"<<endl;
        cout<<"No of Cylinders: ";
        cin>>noCylinder;
        cout<<"No of Gears: ";
        cin>>noGears;
        cout<<"Cooling Type: ";
        cin>>coolingType;
        cout<<"Fuel Tank Capacity: ";
        cin>>fuelTankCapacity;
    }
    void printValueBike(){
        cout<<endl<<"************ Bike Details: *******"<<endl;
        cout<<"No of Cylinders: "<<noCylinder<<endl;
        cout<<"No of Gears: "<<noGears<<endl;
        cout<<"Cooling Type: "<<coolingType<<endl;
        cout<<"Wheel Type: "<<wheelType<<endl;
        cout<<"Fuel Tank Capacity: "<<fuelTankCapacity<<endl;
    }
};

class audiModel: public car{
    private:
    char modelNo[20];
    public:
    void setAudiMOdel(){
        cout<<"Enter the model number of audi: ";
        cin>>modelNo;
    }
    void printAudiModel(){
        cout<<"The model number of Ford is: "<<modelNo<<endl;
    }
};

class bajajModel: public bike{
    private:
    char modelNo[20];
    public:
    void setBajajMOdel(){
        cout<<"Enter the model number of bajaj: ";
        cin>>modelNo;
    }
    void printBajajModel(){
        cout<<"The model number of ford bajaj is: "<<modelNo<<endl;
    }
};
int main(){
    audiModel obj1;
    obj1.setAudiMOdel();
    obj1.setValueCar();
    obj1.setValueVehicle();
    

    obj1.printValueVehicle();
    obj1.printValueCar();
    obj1.printAudiModel();

    //Similarly make the object and do for bike also.....
    return 0;
};  