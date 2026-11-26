
#ifndef STORAGE_H
#define STORAGE_H
#include <string>
#include <vector>
using namespace std;
class Storage {
public:
    void saveTravelers();
    void loadTravelers();
    void saveDestinations();
    void loadDestinations();
    void saveTrips();
    void loadTrips();
};
#endif