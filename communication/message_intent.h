#include <iostream>
using namespace std; 

enum class MessageIntent
{
    SHARE_STATE,
    ASK_FOR_HELP, 
    PROPOSE_ACTION, 
    REPORT_ANOMALY, 
    ESCALATE_TO_HUMAN
}; 