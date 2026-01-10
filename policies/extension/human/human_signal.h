#pragma once 
#include <string> 

using namespace std; 

namespace aic :: policies :: human 
{
    enum class HumanSignalType
    {
        APPROVE, 
        REJECT, 
        MODIFY, 
        PAUSE, 
        ABSTAIN
    }; 

    struct HumanSignal
    {
        HumanSignalType type; 
        string rationale;  // Human reasoning.. 
        string human_id; // Cryptographic / logical 
    }; 
}