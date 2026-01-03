# super_basic_ruin-risk-engine
 simple ruin risk engine made exclusively for educationl purposes.

 ## 1. Goals:
 - to calculate, using Monte-Carlo simulation, the probability of ruin, the time until ruin, the drawdown, and the final capital distribuition, using fixed parameters.

## 2. Parameters:
2.1 seed money : R$ 100.000
2.2 amount of trades : 7.500
2.3 return model: binary and independent.
2.4 probabilities 
  - Win : 45%
  - Loss : 55%
2.5 payoff 
  - Win : +2
  - Loss: -1

## 3. capital atualization law  : C(n+1) = C(n) * (1 + risk * return)

## 4. ruin definition : the simulation is immediately when capital<=50.000

## 5. colected metrics per simulation:
5.1 - ruin occurrence (yes/no)
5.2 - number of trades until the ruin (if it occurs)
5.3 - maximum drawdown
5.4 - final capital (if ruin does not occurs)



 ## 6. agragated metrics :
 after N simulations
  6.1 - probability of ruin.
  6.2 - medium drawdown and percentiles
  6.3 -  final capital distribuition
  
## 7. restrictions:
7.1 - the parameters were fixed and will not change.
7.2 - no extra model will be introducted.
7.3 - no premature otimization.

## 8. final observation
this engine answer the following question:
"giving this assumed model, the system survive?"
