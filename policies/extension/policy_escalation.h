#pragma once
#include "../policy_rule.h"
using namespace std; 

namespace aic::policies {

/**
 * Escalates decision authority to higher human level.
 */
class EscalationPolicy : public PolicyRule 
{
public:
    string id() const override 
    {
        return "extension.escalation";
    }

    PolicyDecision evaluate(const PolicyContext& ctx) override;
};

}
