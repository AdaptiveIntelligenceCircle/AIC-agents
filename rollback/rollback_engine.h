#include <iostream> 
using namespace std; 

#include <string> 
#include "rollback_result.h"

#include "rollback_context.h"
#include "rollback_policy.h"

class RollbackEngine
{
    public: 
    RollbackResult handle(
        const RollbackContext&, 
        const RollbackPolicy&
    ); 
}; 