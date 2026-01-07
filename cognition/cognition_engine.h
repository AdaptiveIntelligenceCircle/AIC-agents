#include <iostream>
using namespace std; 
#include "cognition_output.h"
#include "cognition_context.h"
#include "cognition_input.h"

class CognitionEngine
{
    public: 
    virtual CognitionOutput think (
        const CognitionContext&, 
        const CognitionInput&
    ) = 0; 
}; 