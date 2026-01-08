#pragma once 

#include <string>
#include "policy_context.h"

#include "policy_decision.h"
using namespace std ; 

namespace aic :: policies
{
    class PolicyRule
    {
        public: 
        virtual ~PolicyRule() = default; 

        virtual string id() const = 0; 
        virtual PolicyDecision evaluate(const PolicyContext&); 
    }; 
} // namespace aic :: policies; 