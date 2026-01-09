#pragma once 

#include <memory> 
#include <vector> 

#include "policy_rule.h"
using namespace std; 

namespace aic :: policies
{
    class PolicyRule; 

    class PolicyRegistry
    {
        public: 
        PolicyRegistry() = default; 

        // Non- copyable : policies define authority.. 
        PolicyRegistry (const PolicyRegistry&) = delete; 
        PolicyRegistry &operator = (const PolicyRegistry&) = delete; 

        // Movable is allowed.. 
        PolicyRegistry(PolicyRegistry&&) = default; 
        PolicyRegistry &operator = (PolicyRegistry&&) = default; 

        // void registryPolicy(shared_ptr<PolicyRule> policy);
        // const vector<shared_ptr<PolicyRule>>policies() const; 

        /*Register a policy rule into the registry
         Ownership is transffered to the registry*/

        void register_rule(unique_ptr<PolicyRule> rule)
        {
            rules_.emplace_back(move(rule)) ; 
        }

        private: 
        vector<shared_ptr<PolicyRule>> m_policies;
        vector<unique_ptr<PolicyRule>> rules_;  
    }; 
}