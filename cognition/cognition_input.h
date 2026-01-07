#include <iostream>
using namespace std; 

#include <string> 
#include <vector> 

#include "constraint.h"
#include "goal.h"

struct CognitionInput
{
    vector<Goal> goals; 
    vector<Constraint> constraints;     
}; 