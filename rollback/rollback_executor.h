#include <iostream>
using namespace std; 

#include <string>
#include "rollback_result.h"
#include "rollback_plan.h"

class RollbackExecutor
{
    public: 
    RollbackResult execute(const RollbackPlan&); 
}; 