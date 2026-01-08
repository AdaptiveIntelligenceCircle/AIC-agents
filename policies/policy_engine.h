#pragma once 

#include <vector> 
#include "policy_decision.h"

#include "policy_context.h"
using namespace std; 

namespace aic :: policies
{
    class PolicyRegistry; 

    class PolicyEngine
    {
        public: 
        explicit PolicyEngine(const PolicyRegistry &registry); 

        // Evaluate all policies and return final decision.. 
        PolicyDecision evaluate(const PolicyContext &ctx); 

        private: 
        const PolicyRegistry &m_registry; 
    };
} // namespace aic :: policies.. 