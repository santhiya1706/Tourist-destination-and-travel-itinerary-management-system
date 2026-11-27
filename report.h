#include<iostream>
#include<string>
using namespace std;
struct destination
{
    int destinationId;
    int tripId;
    string name;
    string location;
};
struct Activity
{
    int actid;
    int tripid;
    string actname;
    string actlocation;
     string date;
     int starttime;
     int endtime;
};
struct Booking
{
int bookId;
int tripId;
int travelId;
string bookDate;
string bookStatus;
float amount;
};
struct Expense
{
 int expenseid;
 int tripid;
 string date;
 string category;
 float amount;
};
class Report
{
    private:
      destination destinations[50];
      Activity activities[50];
      Booking bookings[50];
      Expense expenses[50];
       
      int dCount;
      int aCount;
      int bCount;
      int eCount;
public:
Report();
  void adddestination(Destiny d);
 void addActivity(Act a);
 void addBooking(Book b);
 void addExpense(Expense e);
 void Day(int id);
void Destination(int id);
void BookingStatusReport(int id);
void ExpenseSummaryReport(int id);
void BudgetReport(int id, double budget);
 void AllReports(int id, double budget);

};