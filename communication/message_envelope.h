#include <iostream> 
using namespace std; 

#include <string> 
#include "message.h"

struct MessageEnvelope
{
    string sendor_agent_id; 
    string receiver_agent_id; 
    uint64_t timestamp; 
    Message message; 
}; 