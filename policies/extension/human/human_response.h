#pragma once 
#include <string> 
using namespace std; 

namespace aic :: policies :: human
{
    struct HumanResponseRequest
    {
        string question;
        string context_summary;
        bool requires_physical_confirmation = false; 
    }; 
}