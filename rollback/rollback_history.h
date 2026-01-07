#include <iostream>
using namespace std; 

#include <vector> 
#include "rollback_event.h"

class RollbackHistory
{
    public: 
    vector<RollbackEvent> getHistory(const string &agent_id); 
}; 