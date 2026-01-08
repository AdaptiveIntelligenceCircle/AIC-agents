#pragma once 
#include <map> 

#include <iostream>
using namespace std;

#include <string> 
#include <memory> 

namespace aic :: policies
{
    struct PolicyContext
    {
        string agent_id; 
        string intent; 
        double trust_score ; 

        // Arbitrary contextual signals (read-only).. 
        map <string, string> environment; 
        map<string, string> execution_metadata; 
    }; 
} // namespace aic :: policies;; 