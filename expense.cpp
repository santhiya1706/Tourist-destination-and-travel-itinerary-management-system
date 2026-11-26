#include "Expense.h"
Expense::Expense(){
    count=0;
}void Expense::addExpense(){
cout<<"Enter expense ID"<<endl;
cin>>e[count].expense;
cout<<"Enter trip ID"<<endl;
cin>>e[count].tripid;
cout<<"Enter Date: ";
cin>>e[count].date;
cout<<"Enter Category: ";
cin>>e[count].category;
cout<<"Amount:";
cin>>e[count].amount;
count++;}
void Expense::displayExpense(){
    if(count==0){
    cout<<"No Expenses Found"<<endl;
    return;}
    for(int i=0;i<count;i++)
    {
      cout<<"Enter Expense ID: "<<e[i].expense;
cout<<"Enter Trip ID:"<<e[i].tripid;
cout<<"Enter Date: "<<e[i].date;
cout<<"Enter Category: "<<e[i].category;
cout<<"Amount:"<<e[i].amount;
    }
}
void Expense::searchExpense()
{
    int id,found=0;
    cout<<"Enter ID to search"; 
    cin>>id;
    for(int i=0;i<count;i++)
    {
        if(id==e[i].bookid){
            cout<<"Expenses Found";
        cout<<"Enter Expense ID: "<<e[i].expense;
cout<<"Enter Trip ID:"<<e[i].tripid;
cout<<"Enter Date: "<<e[i].date;
cout<<"Enter Category: "<<e[i].category;
cout<<"Amount:"<<e[i].amount;
found=1;
    break; } 
        
    }if(found==0)
    {
        cout<<"Not Found"<<endl;
    }
}
void Expense::updateExpense()
{
    int id,found=0;
    cout<<"Enter Expense ID to update: ";
    cin>>id;
    for(int i=0;i<count;i++)
    {
  if(id==e[i].bookid)
  {
    cout<<"Booking Found";
       cout<<"Enter Booking ID: ";
        cout<<"Enter Expense ID: ";
cin>>e[i].expense;
cout<<"Enter Trip ID:";
cin>>e[i].tripid;
cout<<"Enter Date: ";
cin>>e[i].date;
cout<<"Enter Category: ";
cin>>e[i].category;
cout<<"Amount:";
cin>>e[i].amount;
        cout<<"UPDATED SUCCESSFULLY"<<endl;
        found=1;
        break;
  }if(found==0)
  cout<<"Booking not found";
    }
}void Expense::deleteExpense(){
    int id,found=0;
    cout<<"Enter ID"<<endl;
cin>>id;
for(int i=0;i<count;i++)
{
    if(id==e[i].expenseid){
        found=1;
    for(int j=i;j<count-1;j++){
    e[j]=e[j+1];
}
count--;
cout<<"Expenses Deleted Successfully"<<endl;
break;}}
if(found==0){
    cout<<"Expenses not found"<<endl;
}
}
void Expense::overruns()
{
    float budget,total=0;
    cout<<"Enter the Budget";
    cin>>budget;
    for(int i=0;i<count;i++)
    {
       int total=total+e[i].amount;
    }
    if(total>budget)
    {
        int overruns=total-budget;
        cout<<"Budget Exceeded by :"<<overruns;
    }else{
        int remaining=budget-total;
        cout<<"Balance in Budget"<<remaining;
    }
}