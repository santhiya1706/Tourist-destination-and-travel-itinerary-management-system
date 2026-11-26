#include "destination.h"
#include<iostream>
using namespace std;
void destination::inputDetails(){
    cout<<"ENTER DESTINATION NAME:";
    getline(cin,name);  
    cout<<"ENTER DESTINATION ID:";
    cin>>destinationId;
    cout<<"ENTER LOCATION";
    cin.ignore();
    getline(cin,location);
    cout<<"ENTER DESCRIPTION:";
    getline(cin,description);
    cout<<"ENTER NUMBER OF DAYS:";
    cin>>days;
    cout<<"ENTER  ESTIMATED COST:";
    cin>>cost;
}
int destination::getId(){
    return destinationId;
}
void destination::display(){
    cout<<" DESTINATION NAME:"<<name<<endl;
    cout<<"DESTINATION ID:"<<destinationId<<endl;
    cout<<"LOCATION:"<<location<<endl;
    cout<<"DESCRIPTION:"<<description<<endl;
    cout<<"NUMBER OF DAYS:"<<days<<endl;
    cout<<"ESTIMATED COST:"<<cost<<endl;
}
destination::destination(){
        cost=0;
        destinationId=0;
        days=0;
}
destination::destination( int d, int id, string n, string l, string desc,double c){
destinationId = id;
days=d;
name = n;
location =l;
description=desc;
cost=c;
}
string destination::getName(){ return name; }
string destination::getLocation(){ return location; }
string destination::getDescription(){ return description; }
int destination::getDays(){ return days; }
double destination::getCost(){ return cost; }