#include <iostream>
#include <string> 

using namespace std;

struct RollbackPolicy
{
    bool allow_agent_termination;
    bool require_dual_control; 
}; 
