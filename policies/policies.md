# AIC-agents – Policies Architecture

## 1. Purpose of `policies/`

The `policies/` subsystem defines **what an agent is allowed to do, under which conditions, and why**.

Unlike static rule engines, policies in AIC-agents are:

* Context-aware
* Trust-dependent
* Time-sensitive
* Explicitly overridable by humans

`policies/` acts as the **normative layer** between intention and execution.

---

## 2. Core Design Philosophy

Policies in AIC-agents follow these axioms:

1. **No implicit permission**
   Every action must be explicitly permitted.

2. **Policies can restrict, never justify**
   Policies do not create intent; they only bound it.

3. **Dynamic > static**
   Policy outcomes depend on context, trust, and history.

4. **Human authority supersedes all policies**
   Override is always possible and auditable.

5. **Violation is information**
   Policy violations feed trust decay and learning loops.

---

## 3. High-Level Structure

```
policies/
│
├── policy_engine.h/.cpp      # Policy evaluation core
├── policy_rule.h/.cpp        # Atomic policy rules
├── policy_context.h          # Context abstraction
├── policy_decision.h         # Allow / deny / degrade / escalate
├── policy_registry.h         # Policy discovery & versioning
├── policy_explain.h          # Human-readable explanations
│
├── builtins/                 # Core system policies
│   ├── execution_limits.policy
│   ├── trust_thresholds.policy
│   ├── rollback_guard.policy
│   └── human_override.policy
│
└── extensions/               # Domain / project-specific policies
```

Policies are **data-driven but code-enforced**.

---

## 4. Policy Lifecycle

A policy follows this lifecycle:

1. **Registration** – Loaded into registry
2. **Activation** – Enabled under certain conditions
3. **Evaluation** – Checked during agent decision loop
4. **Decision** – Produces structured outcome
5. **Explanation** – Human-readable rationale
6. **Feedback** – Feeds trust & learning systems

Policies never mutate agent state directly.

---

## 5. Policy Context

`PolicyContext` aggregates:

* Agent identity
* Current intent
* Environment state
* Trust score
* Execution history
* Simulation results

Context is **read-only** from the policy layer.

---

## 6. Policy Decisions

A policy evaluation produces one of:

* `ALLOW` – Action may proceed
* `DENY` – Action is blocked
* `DEGRADE` – Reduced capability / scope
* `ESCALATE` – Human review required

Decisions are composable and ordered.

---

## 7. Interaction With Other Subsystems

### With `trust/`

* Trust scores gate policy activation
* Violations decay trust

### With `simulation/`

* Simulation outcomes influence policy decisions
* High-risk predictions can trigger denial

### With `execution/`

* Execution checks policy decisions synchronously
* No execution bypass allowed

### With `rollback/`

* Policies can mandate checkpointing
* Policies can force rollback triggers

---

## 8. Built-in Policy Categories

### 8.1 Execution Safety Policies

* Rate limits
* Resource ceilings
* Timeouts

### 8.2 Trust-Based Policies

* Capability gating
* Progressive permission unlock

### 8.3 Rollback Guard Policies

* Mandatory snapshot rules
* Irreversibility detection

### 8.4 Human Authority Policies

* Manual override
* Emergency shutdown

---

## 9. Explainability & Audit

Every policy decision must be able to answer:

* Which policy applied?
* Why was it triggered?
* What context was used?

This is mandatory for:

* Audits
* Debugging
* Ethical review

---

## 10. Failure & Abuse Model

Assumptions:

* Policies may be incomplete
* Policies may conflict
* Policies may be exploited

Mitigations:

* Conservative defaults
* Explicit conflict resolution
* Human escalation

---

## 11. Long-Term Evolution

Future extensions may include:

* Formal policy languages
* Temporal logic constraints
* Cross-agent policy coordination

But the core rule remains:

> **Policies exist to protect humans, not empower agents.**

---

## 12. Final Note

If agents represent *capability*, policies represent *permission*.

AIC-agents treats permission as:

* Explicit
* Reviewable
* Revocable

This is the foundation of responsible agent autonomy.
