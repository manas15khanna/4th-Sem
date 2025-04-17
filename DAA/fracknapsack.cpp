#include <iostream>
#include <algorithm> 
using namespace std;

int weights[100], profits[100];
double ratios[100];

bool compare(int a, int b) {
    return ratios[a] > ratios[b];
}

int main() {
    int n; 
    cout << "Enter the number of items: ";
    cin >> n;

    int indices[100];
    
    cout << "Enter weight and profit for each item:\n";
    for (int i = 0; i < n; i++) {
        cin >> weights[i] >> profits[i];
        ratios[i] = (double)profits[i] / weights[i];
        indices[i] = i;
    }

    sort(indices, indices + n, compare);

    int capacity;
    cout << "Enter the knapsack capacity: ";
    cin >> capacity;

    double totalProfit = 0.0;

    for (int i = 0; i < n && capacity > 0; i++) {
        int idx = indices[i];
        if (weights[idx] <= capacity) {
            totalProfit += profits[idx];
            capacity -= weights[idx];
        } else {
            totalProfit += ratios[idx] * capacity;
            capacity = 0; 
        }
    }
    cout << "Maximum achievable profit: " << totalProfit << endl;
    return 0;
}
