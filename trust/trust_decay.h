#include <iostream> 
using namespace std; 

class TrustDecay
{
    public: 
    TrustDecay() = default; 
    ~TrustDecay() = default; 
    
    double applyTrustDecay(double score, uint64_t last_event_time); 
}; 