#include <iostream>
#include <random>
using namespace std;

int main() {
    double capital = 100000.0;
    double peak = capital;
    double max_drawdown = 0.0;
    int number_of_operations = 7500;
    const double risco = 0.0004;
    const double prob_win = 0.45;
    const double limit = 50000.0;
    random_device rd;
    mt19937 rng(rd());
    uniform_real_distribution<double> dist(0.0, 1.0);
    int trade_ruin = -1;
   for(int trade=1; trade<=number_of_operations; trade++){
        double u = dist(rng);
        int returnm=0;
        if(u<prob_win)returnm+=2;
        else returnm -= 1;
        capital *= (1.0 + risco*returnm);
        if(capital > peak)peak = capital;
        double drawdown = (peak-capital)/peak;
        if(drawdown>max_drawdown)max_drawdown=drawdown;
        if(capital<=limit){
            trade_ruin = trade;
            break;
        }
    }
    cout << "Final capital: " << capital << "\n";
    cout << "Maximum drawdown: " << max_drawdown*100 << "%\n";
    if(trade_ruin != -1) cout << "Ruin occurred on trade " << trade_ruin << "\n";
    else cout << "Ruin did not occur\n";
    return 0;
}
