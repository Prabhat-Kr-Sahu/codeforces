#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    int numWays(vector<string>& words, string target) {
        int n = words[0].size();
        int m = target.size();
        vector<vector<long long>> dp(m + 1, vector<long long>(n + 1, 0));
        const int MOD = 1e9 + 7;

        // Precompute character frequencies at each column
        vector<vector<int>> freq(26, vector<int>(n, 0));
        for (const auto& word : words) {
            for (int j = 0; j < n; ++j) {
                freq[word[j] - 'a'][j]++;
            }
        }

        // Initialize dp base case
        for (int j = 0; j <= n; ++j) dp[0][j] = 1;

        // Fill DP table
        for (int i = 1; i <= m; ++i) {
            for (int j = 1; j <= n; ++j) {
                dp[i][j] = dp[i][j - 1]; // Skip current column
                if (freq[target[i - 1] - 'a'][j - 1] > 0) {
                    dp[i][j] += (dp[i - 1][j - 1] * freq[target[i - 1] - 'a'][j - 1]) % MOD;
                    dp[i][j] %= MOD;
                }
            }
        }

        return dp[m][n];
    }
};

int main() {
    Solution solution;

    // Test case
    vector<string> words = {"abba","baab"};
    string target = "bab";
    cout<<"ddsds"<<endl;
    int result = solution.numWays(words, target);
    cout << "Number of ways: " << result << endl;

    return 0;
}
