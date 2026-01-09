#pragma once 
#include "../policy_rule.h"

namespace aic :: policies
{
    class TrustThresholdPolicy : public PolicyRule
    {
        public: 
        explicit TrustThresholdPolicy (double min_trust); 

        string id() const override
        {
            return "builtin.trust_threshold"; 
        }

        PolicyDecision evaluate(const PolicyContext &ctx) override; 

        private: 
        double min_trust_; 
    }; 
}