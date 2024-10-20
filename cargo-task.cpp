#include <iostream>
#include <iomanip>

using namespace std;

main() {
    int n;
    cout << "Enter total transportation for cargo: ";
    cin >> n;

    int total_cost = 0, total_ton = 0;
    float per_1 = 0, per_2 = 0, per_3 = 0;

    for (int i = 1; i <= n; i++) 
    {
        int ton;
        cout << "Enter tonage of cargo " << i << ": ";
        cin >> ton;

        int cost_per_ton;
        if (ton <= 3) {
            cost_per_ton = 200;
            per_1 = per_1 + ton;
        } else if (ton <= 11) {
            cost_per_ton = 175;
            per_2 = per_2 + ton;
        } else {
            cost_per_ton = 120;
            per_3 = per_3 + ton;
        }

        total_ton += ton;
        int cargo_cost = ton * cost_per_ton;
        total_cost = total_cost + cargo_cost;
    }

    cout << "Total ton: " << total_ton << endl;
    cout << "Total cost for all cargo: $" << total_cost << endl;

    float avg = total_cost / total_ton;
    cout << "Average price per ton: $" << avg << endl;

    per_1 = (per_1 / total_ton) * 100;
    per_2 = (per_2 / total_ton) * 100;
    per_3 = (per_3 / total_ton) * 100;
    cout<<fixed<<setprecision(2);
    cout << "Percentage of cargo transported in minibus: " << per_1 << "%" << endl;
    cout << "Percentage of cargo transported in truck: " << per_2 << "%" << endl;
    cout << "Percentage of cargo transported in train: " << per_3 << "%" << endl;

}