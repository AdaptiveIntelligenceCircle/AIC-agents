#include <iostream>
using namespace std; 
#include "executor_result.h"
#include "action_plan.h"
#include "execution_context.h"

class Executor
{
    public: 
    ExecutionResult execute(const ActionPlan &, const ExecutionContext&); 
};  