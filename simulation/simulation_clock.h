#include <iostream>
using namespace std; 

class SimulationClock
{
    public: 
    SimulationClock() = default; 
    ~SimulationClock() = default; 

    void tick(); 
    uint64_t now() const;
}; 