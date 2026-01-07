#include <iostream>
using namespace std; 

struct ChannelPolicy
{
    bool allow_command; 
    int max_message_rate;
    bool require_trust_validation; 
}; 