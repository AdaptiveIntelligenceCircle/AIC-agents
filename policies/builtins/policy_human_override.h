#pragma once 
#include "../policy_rule.h"

using namespace std; 

namespace aic :: policies
{
    class HumanOverridePolicy : public PolicyRule
    {
        public: 
        string id() const override
        {
            return "builtin.human_override"; 
        }

        PolicyDecision evaluate(const PolicyContext &ctx) override; 
    }; 
}