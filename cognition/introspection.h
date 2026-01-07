#include <iostream>
using namespace std; 
#include "cognition_output.h"

class Introspection
{
    public: 
    virtual bool detectUncertainty(const CognitionOutput&) = 0; 
}; 