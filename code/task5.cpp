#include<iostream>
using namespace std;
class Activity{
    public:
        virtual double calculateCaloriesBurnt()=0;
};
class Running: public Activity{
    double distance,time;
    public:
        Running(double distance,double time):distance(distance),time(time){}
        double calculateCaloriesBurnt(){
            return distance*time;
        }
};
class Cycling: public Activity{
    double speed,time;
    public:
        Cycling(double speed,double time):speed(speed),time(time){}
        double calculateCaloriesBurnt(){
            return 30*speed*time;
        }
};
int main(){
    double v,s,t;
    cout<<"For Running Activity"<<endl;
    cout<<"Enter distance in km: ";
    cin>>s;
    cout<<"Enter time in minutes: ";
    cin>>t;
    Running run(s,t);
    cout<<endl<<"For Cycling Activity"<<endl;
    cout<<"Enter speed in km/h: ";
    cin>>v;
    cout<<"Enter time in hours: ";
    cin>>t;
    Cycling cycle(v,t);
    cout<<endl<<"Calories burnt for running acticity: "<<run.calculateCaloriesBurnt()<<endl;
    cout<<"Calcories burnt for cycling activity: "<<cycle.calculateCaloriesBurnt();
    return 0;
}