#pragma once 

#include <memory> 
#include <vector> 

using namespace std; 

namespace aic :: policies
{
    class PolicyRule; 

    class PolicyRegistry
    {
        public: 
        void registryPolicy(shared_ptr<PolicyRule> policy);
        const vector<shared_ptr<PolicyRule>>policies() const; 

        private: 
        vector<shared_ptr<PolicyRule>> m_policies; 
    }; 
}