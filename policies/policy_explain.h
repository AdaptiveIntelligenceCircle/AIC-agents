#pragma once 

#include <string> 
#include <vector> 

using namespace std; 

namespace aic :: policies
{
    struct PolicyDecision; 

    class PolicyExplain
    {
        public:
        static string explain(const vector<PolicyDecision>&decision); 
    };
} // namespace aic :: policies; 