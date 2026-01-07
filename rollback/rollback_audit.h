#include <iostream> 
#include <string> 

#include "rollback_event.h"
using namespace std; 

class RollbackAudit
{
    public: 
    void log(const RollbackEvent&); 
}; 