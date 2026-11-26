#include "trip.h"
#include<iostream>
using namespace std;
void trip::inputDetails(){
    cout<<"ENTER TRIP ID:";
    cin>>tripId;  
    cout<<"ENTER TRAVELER ID";
    cin>>travelerId;
    cout<<"ENTER DESTINATION ID:";
    cin>>destinationId;
    cout<<"ENTER START DATE:";
    cin.ignore();
    getline(cin,startDate);
    cout<<"ENTER END DATE:";
    getline(cin,endDate);
}
int trip::getId(){
    return tripId;
}
void trip::display(){
    cout<<" TRIP ID:"<<tripId<<endl;
    cout<<"TRAVELER ID:"<<travelerId<<endl;
    cout<<"DESTINATION ID:"<<destinationId<<endl;
    cout<<"START DATE:"<<startDate<<endl;
    cout<<"END DATE:"<<endDate<<endl;
}
trip::trip(){
       destinationId=0;
        travelerId=0;
        tripId=0;
        totalCost=0;
}
trip::trip(int tid,int trid,int did,string start,string end,double cost){
tripId=tid;
travelerId=trid;
destinationId=did;
startDate=start;
endDate=end;
totalCost=cost;
}
int trip::getTravelerId(){ return travelerId; }
int trip::getDestinationId(){ return destinationId; }
string trip::getStartDate(){ return startDate; }
string trip::getEndDate(){ return endDate; }
double trip::getTotalCost(){ return totalCost; }