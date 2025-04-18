#include<iostream>
using namespace std;
class Vehicle{
    protected:    
        string model;
        double rate;
    public:
        virtual double getDailyRate()=0;
        virtual void displayDetails()=0;
};
class Car: public Vehicle{
    public:
        Car(string m,double r){
            model=m;
            rate=r;
        }
        double getDailyRate(){
            return rate;
        }
        void displayDetails(){
            cout<<"Car Details\nModel: "<<model<<endl<<"Daily Rate: "<<rate<<endl;
        }
};
class Bike: public Vehicle{
    public:
        Bike(string m,double r){
            model=m;
            rate=r;
        }
        double getDailyRate(){
            return rate;
        }
        void displayDetails(){
            cout<<"Bike Details\nModel: "<<model<<endl<<"Daily Rate: "<<rate<<endl;
        }
};
int main(){
    Vehicle *vehicle;
    string model;
    double rate;
    cout<<"For Car"<<endl;
    cout<<"Enter model name: ";
    cin>>model;
    cout<<"Enter daily rate: ";
    cin>>rate;
    Car car(model,rate);
    cout<<endl<<"For Bike"<<endl;
    cout<<"Enter model name: ";
    cin>>model;
    cout<<"Enter daily rate: ";
    cin>>rate;
    Bike bike(model,rate);
    vehicle=&car;
    cout<<endl<<"Displayibg details rate by getDailyRate()"<<endl<<"For car: "<<vehicle->getDailyRate()<<endl;
    vehicle=&bike;
    cout<<"For nike: "<<vehicle->getDailyRate()<<endl<<endl;
    vehicle=&car;
    cout<<"Displaying car details"<<endl;
    vehicle->displayDetails();
    vehicle=&bike;
    cout<<endl<<"Displaying bike details"<<endl;
    vehicle->displayDetails();
    return 0;
}