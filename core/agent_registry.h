#include <iostream>
using namespace std; 
#include "agent_identity.h"

class AgentRegistry
{
    public: 
    void registerAgent(const AgentIdentity&); 
    void revokeAgent(const string &agent_id); 
};