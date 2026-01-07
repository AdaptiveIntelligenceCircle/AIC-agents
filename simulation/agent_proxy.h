#include <iostream>
using namespace std; 

#include "proposal.h"
#include "simulation_event.h"

class AgentProxy
{
    public:
    Proposal think(); 
    void receivedEvent(const SimulationEvent&); 
}; 