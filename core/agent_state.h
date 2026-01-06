#include <iostream>
using namespace std;

enum class AgentStatus
{
    INIT,
    IDLE, 
    THINKING, 
    PROPOSING_ACTION, 
    EXECUTING,
    SUSPENDED, 
    TERMINATED
}; 

struct AgentState
{
    AgentStatus status;
    double confidence_level; 
    bool requires_human_review; 
}; 