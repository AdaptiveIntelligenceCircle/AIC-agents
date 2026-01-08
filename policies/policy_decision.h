#pragma once 

#include <iostream> 
using namespace std; 

#include <string> 

namespace aic :: policies
{
    enum class PolicyDecisionType
    {
        ALLOW, 
        DENY,
        DEGRADE, 
        ESCALATE
    }; 

    struct PolicyDecision
    {
        PolicyDecisionType type; 
        string reason; 
        string policy_id; 
    }; 
} // namespace aic :: policies.. 