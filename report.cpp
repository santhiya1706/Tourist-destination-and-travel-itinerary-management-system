#include "report.h"
#include<iostream>
using namespace std;
Report::Report()
{
    dCount=0;
    aCount=0;
    bCount=0;
    eCount=0;
}
void Report::adddestination(Destiny d)
{
    destinations[dCount]=d;
    dCount++;
}
void Report::addActivity(Act a)
{
    activities[aCount]=a;
   aCount++;
}
void Report::addBooking(Book b)
{
    bookings[bCount]=b;
    bCount++;
}
void Report::addExpense(Expense e )
{
    expenses[eCount]=e;
    eCount++;
}
void Report::Day(int id)
{
    for(int i=0;i<aCount;i++){
    if(activities[i].tripid==id)
    {
        cout<<"Date :"<<activities[i].date<<endl;
        cout<<"Activity :"<<activities[i].actname<<endl;
        cout<<"Location :"<<activities[i].actlocation<<endl;
        cout<<"Start Time :"<<activities[i].starttime<<endl;
        cout<<"End Time :"<<activities[i].endtime<<endl;

    }}
}
void Report::Destination(int id){
    for(int i=0;i<dCount;i++)
    {
        if(destinations[i].tripId==id)
        {
    cout<<"Destination :"<<destinations[i].name<<endl;
    cout<<"Location :"<<destinations[i].location<<endl;
        }
    }
}
void Report::BookingStatusReport(int id)
{
for(int i=0;i<bCount;i++)
{
    if(bookings[i].tripId==id)
    {
        cout<<"Booking ID :"<<bookings[i].bookId<<endl;
        cout << "Status: " << bookings[i].bookStatus << endl;
     cout << "Amount: " << bookings[i].amount << endl;
    }
}
}
void Report::ExpenseSummaryReport(int id){
    float total=0;
    for(int i=0;i<eCount;i++)
    {
        if(expenses[i].tripid==id)
        {
            cout<<"Category :"<<expenses[i].category<<endl;
            cout<<"Amount :"<<expenses[i].amount<<endl;
            total=total+expenses[i].amount;
        }
    } 
cout<<"TOTAL EXPENSES  "<<endl;}
void Report::BudgetReport(int id,double budget){
double total=0;
for(int i=0;i<eCount;i++)
{
    if(expenses[i].tripid==id){
        total=total+expenses[i].amount;
    }}cout<<"Budget"<<budget<<endl;
cout<<"Expenses :"<<total<<endl;
cout<<"Balance :"<<budget-total;}
void Report::AllReports(int id,double budget)
{
    Day(id);
    Destination(id);
    BookingStatusReport(id);
    ExpenseSummaryReport(id);
    BudgetReport(id,budget);
}
