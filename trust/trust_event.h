#include <iostream> 
using namespace std; 

enum class TrustEventType
{
    SUCCESS, 
    FAILURE, 
    VIOLATION, 
    HUMAN_OVERRIDE 
}; 

struct TrustEvent
{
    TrustEventType type; 
    string description;  
    uint64_t timestamp; 
}; 