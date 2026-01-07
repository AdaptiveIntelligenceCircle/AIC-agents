#include <iostream>
using namespace std; 

#include <string> 
#include "rollback_type.h"

struct RollbackAction
{
    RollbackType type;
    string target;  
}; 