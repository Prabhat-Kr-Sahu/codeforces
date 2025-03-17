#include <bits/stdc++.h>
using namespace std;
// #define int long long
#define INF (int)1e18
#define print(x) cout << x << endl
mt19937_64 RNG(chrono::steady_clock::now().time_since_epoch().count());

void Solve()
{
    int n;
    cin >> n;
    int a[n];
    vector<int> ps(n);
    int maxSubarraySum = INT_MIN; // To store the maximum subarray sum
    int minPrefixSum = 0;         // Minimum prefix sum encountered so far
    int minPrefixIndex = -1;      // Index where minPrefixSum occurs
    int start = 0, end = 0;       // To track the range of the maximum subarray

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
            ps[0] = a[0];
        else
            ps[i] = ps[i - 1] + a[i];
        
        // Calculate the maximum subarray sum
        if (ps[i] - minPrefixSum > maxSubarraySum)
        {
            maxSubarraySum = ps[i] - minPrefixSum;
            start = minPrefixIndex + 1; // Start of the subarray
            end = i;                   // End of the subarray
        }

        // Update the minimum prefix sum and its index
        if (ps[i] < minPrefixSum)
        {
            minPrefixSum = ps[i];
            minPrefixIndex = i;
        }
    }

    // Calculate left subarray sum
    int leftSum = (start > 0) ? ps[start - 1] : 0;

    // Calculate right subarray sum
    int totalSum = ps[n - 1];
    int rightSum = totalSum - ps[end];

    // Output results
    cout << "Maximum Subarray Sum: " << maxSubarraySum << endl;
    cout << "Range: [" << start << ", " << end << "]" << endl;
    cout << "Left Subarray Sum: " << leftSum << endl;
    cout << "Right Subarray Sum: " << rightSum << endl;
    if(leftSum==0 or rightSum == 0){
         
    }
}   


int32_t main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(nullptr);
    int t = 1;

    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Solve();
    }

    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    // cerr << "Time measured: " << elapsed.count() * 1e-9 << " seconds.\n";

    return 0;
}
