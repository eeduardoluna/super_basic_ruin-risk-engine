#include <iostream>
#include <random>
using namespace std;
    typedef struct result{
    double final_capital;
    bool ruin;
    double max_drawdown;
} result;

result simulate(mt19937 &rng) {
    double capital = 100000.0;
    double peak = capital;
    double max_drawdown = 0.0;
    const int number_of_operations = 7500;
    const double risco = 0.0004;
    const double prob_win = 0.55;
    const double limit = 50000.0;
    bool ruin = false;

    uniform_real_distribution<double> dist(0.0, 1.0);

    for(int trade = 1; trade <= number_of_operations; trade++){
        double u = dist(rng);
        double returnm = (u < prob_win) ? 2 : -1;
        capital *= (1.0 + risco * returnm);
        if(capital > peak) peak = capital;
        double drawdown = (peak - capital) / peak;
        if(drawdown > max_drawdown) max_drawdown = drawdown;
        if(capital <= limit){
            ruin = true;
            break;
        }
    }

    return {capital, ruin, max_drawdown};
}

