#include <iostream>
using namespace std; 

#include "message_envelope.h"
#include "channel.h"

class Communicator
{
    public: 
    bool send(const MessageEnvelope&, const Channel&); 
};