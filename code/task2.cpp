#include<iostream>
using namespace std;
class SmartDevice{
    protected:
        bool status;
    public:
        virtual void turnOn()=0;
        virtual void turnOff()=0;
        virtual bool getStatus()=0;

};
class lightBulb: public SmartDevice{
    int brightness;
    bool isOn=status;
    public:
        lightBulb(int bright){
            if(bright>=0&&bright<=100){
                brightness=bright;
            }
            else{
                do{
                    cout<<"Invalid input. brightness ranges from (0-100%. Enter again: ";
                    cin>>brightness;
                }while(brightness<0||brightness>100);
            }
        }
        void turnOn(){
            status=1;
            isOn=1;
        }
        void turnOff(){
            status=0;
            isOn=0;
        }
        bool getStatus(){
            return status;
        }

};
class Thermostat: public SmartDevice{
    double temperature;
    bool isOn=status;
    public:
        void turnOn(){
            status=1;
            isOn=1;
        }
        void turnOff(){
            status=0;
            isOn=0;
        }
        bool getStatus(){
            return status;
        }

};
int main(){
    int bright;
    cout<<"Enter brightness for light bulb: ";
    cin>>bright;
    lightBulb bulb(bright);
    cout<<"Turning on bulb"<<endl;
    bulb.turnOn();
    cout<<"Checking status"<<endl;
    if(bulb.getStatus()){
        cout<<"Status: On"<<endl;
    }
    else{
        cout<<"Status: Off"<<endl;
    }
    cout<<"Turning off bulb"<<endl;  
    bulb.turnOff();
    cout<<"Checking status"<<endl;  
    if(bulb.getStatus()){
        cout<<"Status: On"<<endl;
    }
    else{
        cout<<"Status: Off"<<endl;
    }
    Thermostat thermo;
    cout<<endl<<"Turning on thermostat"<<endl;
    thermo.turnOn();
    cout<<"Checking status"<<endl;
    if(thermo.getStatus()){
        cout<<"Status: On"<<endl;
    }
    else{
        cout<<"Status: Off"<<endl;
    }
    cout<<"Turning off thermostat"<<endl;  
    thermo.turnOff();
    cout<<"Checking status"<<endl;  
    if(thermo.getStatus()){
        cout<<"Status: On"<<endl;
    }
    else{
        cout<<"Status: Off"<<endl;
    }
    return 0;
}