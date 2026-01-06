## SECURITY.md

### Security Philosophy

AIC-agents assumes:

* Systems can fail
* Agents can behave unexpectedly
* Attackers can be intelligent

Security is treated as a **continuous property**, not a feature.

---

### Threat Model

* Malicious agents
* Compromised execution environments
* Emergent harmful behavior
* Trust manipulation

---

### Reporting Vulnerabilities

If you discover a security issue:

* **Do not** open a public issue
* Contact the maintainers privately
* Provide reproduction steps and potential impact

Responsible disclosure is essential.

---

### Design-Level Mitigations

* Sandboxed execution
* Trust decay and revocation
* Action rollbacks
* Simulation-before-deployment

---

### Long-term Security Direction

Security research is an ongoing effort.

We are particularly interested in:

* Agent containment strategies
* Trust poisoning resistance
* Human override mechanisms
* Failure mode transparency

---

### Final Note

If you are looking to build uncontrolled, extractive, or opaque AI systems, this project is likely **not** for you.

If you are willing to build slowly, responsibly, and honestly — welcome.
