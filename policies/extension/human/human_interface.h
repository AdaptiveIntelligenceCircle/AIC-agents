#pragma once 
#include "human_signal.h"

#include "human_response.h"
using namespace std; 

namespace aic :: policies :: human 
{
    // abstract human interaction boundary.. 
    // No UI, no transport assumptions..

    class HumanInterface
    {
        public:
        virtual ~HumanInterface() = default; 
        virtual HumanSignal request_input(
            const HumanResponseRequest &request 
        ) = 0; 
    }; 
}