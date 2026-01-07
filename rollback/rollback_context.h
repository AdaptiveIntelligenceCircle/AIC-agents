#include <iostream>
using namespace std; 
#include "rollback_trigger.h"

#include <string> 
#include <cmath> 

struct RollbackContext
{
    string agent_id; 
    uint64_t timestamp; 
    RollbackTrigger trigger; 
};