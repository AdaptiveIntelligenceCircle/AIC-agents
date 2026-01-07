#include <iostream>
using namespace std; 

#include <optional>
#include "proposal.h"
#include "reasoning_trace.h"

struct CognitionOutput
{
    Proposal proposal; 
    optional<ReasoningTrace> trace; 
}; 