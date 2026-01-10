#pragma once 
#include "../policy_rule.h"

using namespace std; 

namespace aic :: policies :: simulation
{
    // Evaluates alternative (counterFactual) actions. 
    class CounterfactualPolicy : public PolicyRule
    {
        public: 
        string id() const override 
        {
            return "extension.counterfactual_policy"; 
        }; 

        PolicyDecision evaluate(const PolicyContext &ctx) override; 
    }; 
}