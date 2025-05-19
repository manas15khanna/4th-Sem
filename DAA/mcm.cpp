#include <iostream>
using namespace std;

int MatrixChainOrder(int p[], int n) {
    int dp[n][n];
    for (int i = 1; i < n; i++)
        dp[i][i] = 0;
    for (int L = 2; L < n; L++) {
        for (int i = 1; i < n - L + 1; i++) {
            int j = i + L - 1;
            dp[i][j] = 1e9;
            for (int k = i; k < j; k++) {
                int cost = dp[i][k] + dp[k + 1][j] + p[i - 1] * p[k] * p[j];
                if (cost < dp[i][j])
                    dp[i][j] = cost;
            }
        }
    }
    return dp[1][n - 1];
}

int main() {
    int n;
    cout << "Enter number of matrices: ";
    cin >> n;
    int p[n + 1];
    cout << "Enter dimensions (length " << n + 1 << "): ";
    for (int i = 0; i <= n; i++)
        cin >> p[i];
    int minCost = MatrixChainOrder(p, n + 1);
    cout << "Minimum number of multiplications is " << minCost << endl;
    return 0;
}

