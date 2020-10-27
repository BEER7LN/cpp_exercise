#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;
class Vehicle{
protected:
    int ID;
    int wheels;
    int weight;
public:
    Vehicle(int v_id,int v_wheels, int v_weight):ID(v_id),wheels(v_wheels),weight(v_weight){}
    int get_wheels(){ return wheels;}
    int get_weight(){ return weight;}
    double wheel_load(){ return weight/wheels;}
    void print(){cout <<" Vehicle No. "<<ID <<": weight " << weight << " Kg and wheels "<<wheels <<'\n';}
};
class Car:public Vehicle{
private:
    int passenger_load;
public:
    Car(int c_id,int c_wheels, int c_weight,int c_passenger_load):Vehicle(c_id,c_wheels,c_weight),passenger_load(c_passenger_load){}
    int get_passengers(){ return passenger_load;}
    void print(){cout << " Car No. "<<ID << ": passenger_load "<<passenger_load<<" weight " <<weight<<" Kg and wheels "<<wheels <<'\n'; }
};
class Truck:public Vehicle{
private:
    int passenger_load;
    int payload;
public:
    Truck(int t_id,int t_wheels, int t_weight,int t_passenger_load,int t_payload):Vehicle(t_id,t_wheels,t_weight),passenger_load(t_passenger_load),payload(t_payload){}
    int get_passengers(){ return passenger_load;}
    double efficiency(){ return (double)payload/(payload+weight);}
    void print(){cout <<" Truck No. "<<ID << ": passenger_load "<<passenger_load<<" weight " <<weight<<" Kg wheels "<<wheels<<" and efficiency "<<fixed << setprecision(2)<<efficiency()<<'\n'; }
};
int main() {
    int num = 1;
    string name;
    while (1){
        string num_che;
        if(num == 1)
            num_che = "st";
        else if (num == 2)
            num_che = "nd";
        else if (num == 3)
            num_che = "rd";
        else
            num_che = "th";
        cin >> name;
        if(strcmp(name.c_str(),"-1")==0)
            break;
        int the_id = 0,the_wheels = 0,the_weight = 0,the_passenger_load = 0,the_payload = 0;
        if(strcmp(name.c_str(),"vehicle")==0){
            cin >> the_id >> the_wheels >> the_weight;
            Vehicle che1(the_id,the_wheels,the_weight);
            cout << "The " << num<< num_che <<" object is" ;
            che1.print();
            num++;
        }
        else if(strcmp(name.c_str(),"car")==0){
            cin >> the_id >> the_wheels >> the_weight >>the_passenger_load;
            Car che2(the_id,the_wheels,the_weight,the_passenger_load);
            cout << "The " << num<< num_che <<" object is" ;
            che2.print();
            num++;
        }
        else{
            cin >> the_id >> the_wheels >> the_weight >>the_passenger_load>> the_payload;
            Truck che3(the_id,the_wheels,the_weight,the_passenger_load,the_payload);
            cout << "The " << num<< num_che <<" object is" ;
            che3.print();
            num++;
        }
    }
    return 0;
}
