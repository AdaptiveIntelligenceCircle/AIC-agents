#include <iostream> 
using namespace std; 
#include "action.h"
#include <vector>

struct ActionPlan
{
    vector<Action> actions; 
    bool require_human_approval; 
}; 