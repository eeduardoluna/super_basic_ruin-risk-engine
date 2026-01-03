## Model Limitations

- Returns are assumed to be independent; there are no streaks, market regimes, or correlations.
- The payoff structure is fixed and unrealistic.
- Probabilities are constant over time.
- Risk is always a fixed fraction of the current capital.

---

## Path Dependency

- The order of gains and losses matters.
- Two sequences with the same number of wins and losses can lead to very different final capital values.

---

## Why Positive Expected Value Does Not Guarantee Survival

- A positive expected value does not imply capital preservation.
- Even profitable systems can experience ruin due to variance and drawdowns.

---

## Parameter Sensitivity

- Small variations in the risk per trade can lead to large changes in the probability of ruin.
- The relationship between risk and ruin is highly non-linear.

---

## Why Monte Carlo Simulation Is Used

- There is no closed-form analytical solution for this problem.
- The path of returns matters, not just their average.
- Analytical approaches fail to properly capture drawdowns and ruin events.
