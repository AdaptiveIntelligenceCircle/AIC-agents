#include <iostream>
using namespace std; 

enum class RollbackTrigger
{
    POLICY_VIOLATION, 
    TRUST_THRESHOLD_BREACH, 
    HUMAN_OVERRIDE, 
    ANOMALY_DETECTED, 
    EXECUTION_FAILURE
};