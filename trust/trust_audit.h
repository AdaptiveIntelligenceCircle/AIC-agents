#include <iostream>
using namespace std; 
#include "trust_score.h"

class TrustAudit
{
    public: 
    TrustAudit() = default; 
    ~TrustAudit() = default; 
    
    void logDecision(const string &agent_id, const TrustScore&); 
}; 