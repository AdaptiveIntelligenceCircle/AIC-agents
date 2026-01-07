#include <iostream> 
using namespace std; 

enum class SimulationEventType
{
   CONTEXT_CHANGE ,
   AGENT_MESSAGE, 
   ACTION_PROPOSAL, 
   TRUST_UPDATE, 
   HUMAN_OVERRIDE  
}; 

struct SimulationEvent
{
    SimulationEventType type; 
    string detail; 
}; 