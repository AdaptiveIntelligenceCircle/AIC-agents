#include <iostream>
using namespace std; 

#include "message_envelope.h"

class CommunicationAudit
{
    public: 
    void log(const MessageEnvelope&);
}; 