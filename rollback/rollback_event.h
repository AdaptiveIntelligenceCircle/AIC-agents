#include <iostream>
using namespace std; 
#include "rollback_type.h"
#include "rollback_trigger.h"

struct RollbackEvent
{
    RollbackType type;
    RollbackTrigger trigger; 
    uint64_t timestamp; 
};