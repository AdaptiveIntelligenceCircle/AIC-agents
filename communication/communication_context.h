#include <iostream> 
using namespace std; 

struct CommunicationContext
{
    string environment;
    bool is_human_present; 
    uint64_t timestamp; 
}; 