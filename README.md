# basic_ruin-risk-engine.cpp

A simple ruin risk engine built **exclusively for educational purposes**.

This project uses **Monte Carlo simulation** to estimate the probability of ruin and related risk metrics under a fixed and simplified trading model.

## Objective

Given a predefined stochastic model, answer the following question:

> *Under these assumptions, does the system survive?*

## Model Description

Each simulation represents a sequence of independent trades with fixed parameters.

### Parameters

**Initial capital**  
R$ 100,000

**Number of trades**  
7,500

**Return model**  
Binary and independent

**Probabilities**  
- Win: 45%  
- Loss: 55%

**Payoff**  
- Win: +2  
- Loss: −1

**Risk per trade**  
0.04% of current capital

**Capital update rule**  
C(n+1) = C(n) · (1 + r · R(n))

where `r` is the fixed risk fraction and `R(n)` is the trade return.

**Ruin condition**  
The simulation stops immediately if capital ≤ R$ 50,000.

## Metrics Collected per Simulation

- Ruin occurrence (yes / no)  
- Number of trades until ruin (if it occurs)  
- Maximum drawdown  
- Final capital (if ruin does not occur)

## Aggregated Metrics (after N simulations)

- Probability of ruin  
- Average drawdown and drawdown percentiles  
- Final capital distribution

## Restrictions

- All parameters are fixed and do not change.  
- No additional models or regime dynamics are introduced.  
- No premature optimization.
