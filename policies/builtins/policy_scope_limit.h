#pragma once 
#include "../policy_rule.h"

using namespace std; 

namespace aic :: policies
{
    class ScopeLimitPolicy : public PolicyRule 
    {
        string id() const override 
        {
            return "builtin.scope_limit"; 
        }

        PolicyDecision evaluate(const PolicyContext &ctx) override;
    }; 
}