#include <iostream>
using namespace std; 

struct TrustPolicy
{
    double min_score_required; 
    bool require_human_if_low_trust; 
}; 