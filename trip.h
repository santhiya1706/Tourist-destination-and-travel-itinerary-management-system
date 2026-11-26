#include <string>
using namespace std;
class trip{
    private:
    int travelerId,destinationId,tripId;
    string startDate,endDate;
    double totalCost;
    public:
    void display();
    int getId();
    trip(int tid,int trid,int did,string start,string end,double cost);
    void inputDetails();
    trip();
};