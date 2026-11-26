#include <string>
using namespace std;
class destination{
    private:
    int days,destinationId;
    string name,location,description;
    double cost;
    public:
    void display();
    int getId();
    destination(int d,int id,string n,string l,string desc,double c);
    void inputDetails();
    destination();
    string getName();
    string getLocation();
    string getDescription();
    int getDays();
    double getCost();
};