#include <iostream>
using namespace std;

int main() {
    int n, W;
    cout << "Enter the number of items: " <<endl;
    cin >> n;
    int weight[n], value[n];

    cout << "Enter weights of the items: "<<endl;
    for (int i = 0; i < n; i++) cin >> weight[i];

    cout << "Enter values of the items: ";
    for (int i = 0; i < n; i++) cin >> value[i];

    cout << "Enter the maximum capacity of the knapsack: "<<endl;
    cin >> W;

    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= W; j++) {
            dp[i][j] = 0;
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int w = 0; w <= W; w++) {
            if (weight[i - 1] <= w) 
                dp[i][w] = max(value[i - 1] + dp[i - 1][w - weight[i - 1]], dp[i - 1][w]);
            else 
                dp[i][w] = dp[i - 1][w];
        }
    }
    cout << "Maximum value that can be obtained: " << dp[n][W] <<endl ;
    return 0;
}
