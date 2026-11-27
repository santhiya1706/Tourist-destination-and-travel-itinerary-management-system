#include<iostream>
#include<string>
using namespace std;
struct Booking
{
    int bookingId;
    int travelerId;
    int tripId;
    string bookingDate;
    string bookingStatus;
    float amount;
};
class Booking
{
    private:
    Booking b[50];
    int count;
    public:
    Booking()
    {
        count=0;
    }Booking();
    void addBooking();
    void displayBooking();
    void deleteBooking();
    void updateBooking();
    void searchBooking();
    
};