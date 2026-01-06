#include <iostream>
using namespace std;

#include <string> 
#include "executor_result.h"

#include "action.h"

class Sandbox
{
    public: 
    ExecutionResult run(const Action&); 
}; 