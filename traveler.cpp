#include "traveler.h"
#include<iostream>
using namespace std;
void traveler::inputDetails(){
    cout<<"ENTER NAME:";
    getline(cin,name);  
    cout<<"ENTER AGE:";
    cin>>age;
    cout<<"ENTER TRAVELER ID";
    cin>>travelerId;
    cout<<"ENTER GROUP SIZE:";
    cin>>groupSize;
    cout<<"ENTER CONTACT:";
    cin>>contact;
    cout<<"ENTER PREFERENCE:";
    cin.ignore();
    getline(cin,preference);
}
int traveler::getId(){
    return travelerId;
}
void traveler::display(){
    cout<<"NAME:"<<name<<endl;
    cout<<"AGE:"<<age<<endl;
    cout<<"TRAVELER ID:"<<travelerId<<endl;
    cout<<"GROUP SIZE:"<<groupSize<<endl;
    cout<<"CONTACT:"<<contact<<endl;
    cout<<"PREFERENCE:"<<preference<<endl;
}
traveler::traveler(){
        age=0;
        travelerId=0;
        groupSize=0;
}
traveler::traveler(int a, int id, int g, string n, string c, string p){
 age = a;
travelerId = id;
groupSize = g;
name = n;
contact = c;
preference = p;
}
string traveler::getName(){ return name; }
int traveler::getAge(){ return age; }
int traveler::getGroupSize(){ return groupSize; }
string traveler::getContact(){ return contact; }
string traveler::getPreference(){ return preference; }
