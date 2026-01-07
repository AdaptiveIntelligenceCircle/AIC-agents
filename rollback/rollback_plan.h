#include <iostream> 
using namespace std; 
#include <vector> 
#include "rollback_action.h"

struct RollbackPlan
{
    vector<RollbackAction> actions; 
    bool require_human_confirmation;
};  