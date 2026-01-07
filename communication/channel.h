#include <iostream>
using namespace std; 

#include <string>

enum class ChannelType
{
    LOCAL, 
    INTER_PROCESS, 
    REMOTE, 
    SIMULATED
}; 

struct Channel
{
    ChannelType type ; 
    bool encrypted; 
}; 