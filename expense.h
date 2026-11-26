#include<iostream>
#include<string>
using namespace std;
struct Expense
{
    int expenseid;
    int tripid;
    string category;
    string date;
    float amount;
};
class Expense{
    private:
    Expense e[50];
    int count;
    public:
    Expense()
    {
        count=0;
    }Expense();
    void addExpense();
    void displayExpense();
    void deleteExpense();
    void updateExpense();
    void searchExpense();
    void overruns();
};