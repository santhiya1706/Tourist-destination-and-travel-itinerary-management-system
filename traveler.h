#include <string>
using namespace std;
class traveler{
    private:
    int age,travelerId,groupSize;
    string name,contact,preference;
    public:
    void display();
    int getId();
    traveler(int a,int id,int g,string n,string c,string p);
    void inputDetails();
    traveler();
    string getName();
    int getAge();
    int getGroupSize();
    string getContact();
    string getPreference();
};