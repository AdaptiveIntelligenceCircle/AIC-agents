#include <iostream> 
using namespace std; 

#include <string> 
#include <algorithm>

struct ExecutionResult
{
    bool success; 
    string summary; 
    bool rollback_required; 
}; 