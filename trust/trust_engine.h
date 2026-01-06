#include <iostream> 
using namespace std; 
#include "trust_score.h"
#include "trust_event.h"

#include "../core/capability.h"
#include <vector> 

class TrustEngine
{
    public:
    TrustScore evaluate(const vector<TrustEvent>&history ); 
    bool allowAction(const TrustScore &, const Capability); 
};