#include <iostream> 
using namespace std; 

struct AgentIdentity
{
    string agent_id; 
    string type;  // human-assist, system , observer
    string origin; // local , remote, simulated,...
    uint64_t created_at; 
}; 