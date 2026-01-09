#pragma once 
#include "../policy_rule.h"

namespace aic :: policies
{
    class IrreversibleActionGuard : public PolicyRule
    {
        public: 
        string id() const override
        {
            return "builtin.irreversible_guard" ; 
        }

        PolicyDecision evaluate(const PolicyContext&ctx) override;

    }; 
    
}