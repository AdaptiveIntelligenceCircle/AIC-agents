#pragma once
#include "../policy_registry.h"

using namespace std;

#include "policy_trust_threshold.h"
#include "policy_irreversible_guard.h"
#include "policy_human_override.h"

#include "policy_responsibility_trace.h"
#include "policy_scope_limit.h"

namespace aic ::policies
{
    inline void register_builtin_policies(PolicyRegistry &registry)
    {
        registry.register_rule(
            make_unique<TrustThresholdPolicy>(0.6));
        registry.register_rule(
            make_unique<IrreversibleActionGuard>());
        registry.register_rule(
            make_unique<HumanOverridePolicy>());
        registry.register_rule(
            make_unique<ResponsibilityTracePolicy>());
        registry.register_rule(
            make_unique<ScopeLimitPolicy>());
    }
}