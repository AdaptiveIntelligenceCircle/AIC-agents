#pragma once 
#include "../policy_rule.h"

using namespace std; 

namespace aic :: policies
{
    class ResponsibilityTracePolicy : public PolicyRule
    {
        public: 
        string id() const override
        {
            return "builtin.responsibility_trace"; 
        }

        PolicyDecision evaluate(const PolicyContext &ctx) override; 
    }; 
}