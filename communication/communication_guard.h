#include <iostream> 
using namespace std; 

#include <string> 
#include <cstring> 
#include "message_envelope.h"

class CommunicationGuard
{
    public: 
    bool allow(const MessageEnvelope&); 
}; 