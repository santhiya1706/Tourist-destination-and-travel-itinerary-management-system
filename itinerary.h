#include<iostream>
#include<string>
using namespace std;
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
class Itinerary
{private:
    Activity a[50];
    int count;
public:
    Itinerary();
    void addActivity();
    void displayActivity();
    void deleteActivity();
    void updateActivity();
    void searchActivity();
    void overlap();
};
