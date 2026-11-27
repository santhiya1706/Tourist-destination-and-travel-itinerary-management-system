#include "Booking.h"
Booking::Booking(){
    count=0;
}
void Booking::addBooking(){
    if(count>=50){
        cout<<"Booking limit reached"<<endl;
return;
}cout<<"Enter Booking ID: ";
cin>>b[count].bookid;
cout<<"Enter Trip ID:";
cin>>b[count].tripid;
cout<<"Enter Booking Date: ";
cin>>b[count].bookid;
cout<<"Enter Traveler ID: ";
cin>>b[count].travelid;
cout<<"Enter Status: ";
cin>>b[count].bookstatus;
cout<<"Amount:";
cin>>b[count].amount;
count++;}
void Booking::displayBooking(){
    if(count==0){
    cout<<"No Bookings Found"<<endl;
    return;}
    for(int i=0;i<count;i++)
    {
      cout<<"Enter Booking ID: "<<b[i].bookid;
cout<<"Enter Trip ID:"<<b[i].tripid;
cout<<"Enter Booking Date: "<<b[i].bookdate;
cout<<"Enter Traveler ID: "<<b[i].travelid;
cout<<"Enter Status: "<<b[i].bookstatus;
cout<<"Amount:"<<b[i].amount;
    }
}
void Booking::searchBooking()
{
    int id,found=0;
    cout<<"Enter ID to search";
    cin>>id;
    for(int i=0;i<count;i++)
    {
        if(id==b[i].bookid){
            cout<<"Booking Found";
        cout<<"Trip ID"<<b[i].tripid<<endl;;
        cout<<"Enter Booking Date: "<<b[i].bookdate;
cout<<"Enter Traveler ID: "<<b[i].travelid;
cout<<"Enter Status: "<<b[i].bookstatus;
cout<<"Amount:"<<b[i].amount;
found=1;
    break; } 
        
    }if(found==0)
    {
        cout<<"Not Found"<<endl;
    }
}
void Booking::updateBooking()
{
    int id,found=0;
    cout<<"Enter Booking ID to update: ";
    cin>>id;
    for(int i=0;i<count;i++)
    {
  if(id==b[i].bookid)
  {
    cout<<"Booking Found";
       cout<<"Enter Booking ID: ";
cin>>b[i].bookid;
cout<<"Enter Trip ID:";
cin>>b[i].tripid;
cout<<"Enter Booking Date: ";
cin>>b[i].bookid;
cout<<"Enter Traveler ID: ";
cin>>b[i].travelid;
cout<<"Enter Status: ";
cin>>b[i].bookstatus;
cout<<"Amount:";
cin>>b[i].amount;
        cout<<"UPDATED SUCCESSFULLY"<<endl;
        found=1;
        break;
  }if(found==0)
  cout<<"Booking not found";
    }
}void Booking::deleteBooking(){
    int id,found=0;
    cout<<"Enter ID"<<endl;
cin>>id;
for(int i=0;i<count;i++)
{
    if(id==b[i].bookid){
        found=1;
    for(int j=i;j<count-1;j++){
    b[j]=b[j+1];
}
count--;
cout<<"Booking Deleted Successfully"<<endl;
break;}}
if(found==0){
    cout<<"Booking not found"<<endl;
}
}