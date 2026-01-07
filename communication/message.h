#include <iostream> 
using namespace std; 

#include "message_intent.h"
#include "message_type.h"

struct Message
{
    MessageType type; 
    MessageIntent intent; 
    string content; 
}; 