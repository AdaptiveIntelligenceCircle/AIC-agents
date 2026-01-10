#pragma once 
#include "../policy_rule.h"

using namespace std; 

namespace aic :: policies
{
    // introduces intentional delay for human consultation... 
    class DecisionDelayPolicy : public PolicyRule
    {
        public: 
        string id() const override 
        {
            return "extension.decision_delay"; 
        };
        
        PolicyDecision evaluate(const PolicyContext &ctx) override; 
    }; 

}