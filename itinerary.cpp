#include "itinerary.h"
Itinerary::Itinerary(){
    count=0;
}
void Itinerary::addActivity(){
    if(count>=50){
        cout<<"Activity limit reached"<<endl;
return;
}cout<<"Enter Activity ID: ";
cin>>a[count].actid;
cout<<"Enter Trip ID:";
cin>>a[count].tripid;
cout<<"Enter Activity Name: ";
getline(cin,a[count].actname);
cout<<"Enter Activity Location: ";
getline(cin,a[count].actlocation);
cout<<"Enter Date";
getline(cin,a[count].date);
cout<<"Enter Start Time: ";
cin>>a[count].starttime;
cout<<"Enter End Time:";
cin>>a[count].endtime;
count++;}
void Itinerary::displayActivity(){
    if(count==0){
    cout<<"No Activities Found"<<endl;
    return;}
    for(int i=0;i<count;i++)
    {
        cout<<"Activity ID"<<a[i].actid<<endl;
        cout<<"Trip ID"<<a[i].tripid<<endl;;
        cout<<"Activity Name"<<a[i].actname<<endl;
        cout<<"Activity Location"<<a[i].actlocation<<endl;
        cout<<"Date"<<a[i].date<<endl;
        cout<<"Start time"<<a[i].starttime<<endl;
        cout<<"End time"<<a[i].endtime<<endl;
    }
}
void Itinerary::searchActivity()
{
    int id,found=0;
    cout<<"Enter ID to search";
    cin>>id;
    for(int i=0;i<count;i++)
    {
        if(id==a[i].actid){
            cout<<"Activity Found";
        cout<<"Activity ID"<<a[i].actid<<endl;
        cout<<"Trip ID"<<a[i].tripid<<endl;;
        cout<<"Activity Name"<<a[i].actname<<endl;
        cout<<"Activity Location"<<a[i].actlocation<<endl;
        cout<<"Date"<<a[i].date<<endl;
        cout<<"Start time"<<a[i].starttime<<endl;
        cout<<"End time"<<a[i].endtime<<endl;
       found=1;
    break; } 

        
    }if(found==0)
    {
        cout<<"Not Found"<<endl;
    }
}
void Itinerary::updateActivity()
{
    int id,found=0;
    cout<<"Enter Activity ID to update: ";
    cin>>id;
    for(int i=0;i<count;i++)
    {
  if(id==a[i].actid)
  {
    cout<<"Activity Found";
     cout<<"Activity ID"<<endl;
     cin>>a[i].actid;
        cout<<"Trip ID"<<endl;
       cin>>a[i].tripid;
        cout<<"Activity Name"<<endl;
       getline(cin,a[i].actname);
        cout<<"Activity Location"<<endl;
        getline(cin,a[i].actlocation);
        cout<<"Enter Date"<<endl;
        getline(cin,a[i].date);
        cout<<"Start time"<<endl;
        cin>>a[i].starttime;
        cout<<"End time"<<endl;
        cin>>a[i].endtime;
        cout<<"UPDATED SUCCESSFULLY"<<endl;
        found=1;
        break;
  }if(found==0)
  cout<<"Activity not found";
    }
}void Itinerary::deleteActivity(){
    int id,found=0;
    cout<<"Enter ID"<<endl;
cin>>id;
for(int i=0;i<count;i++)
{
    if(id==a[i].actid){
        found=1;
    for(int j=i;j<count-1;j++){
    a[j]=a[j+1];
}
count--;
cout<<"Activity Deleted Successfully"<<endl;
break;}}
if(found==0){
    cout<<"Activity not found"<<endl;
}
}
void Itinerary::overlap()
{   
    for(int i=0;i<count-1;i++)
    {
        for(int j=i+1;j<count;j++)
        {
            if(a[i].tripid==a[j].tripid && a[i].date==a[j].date)
            {
                if(a[i].starttime<a[j].endtime && a[j].starttime<a[i].endtime){
                    cout<<"Time Overlaps";
                }
            }
        }
    }}