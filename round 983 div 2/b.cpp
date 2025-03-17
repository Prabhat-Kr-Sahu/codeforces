#include <bits/stdc++.h>
using namespace std;

#define pb push_back
#define all(c) c.begin(), c.end()
#define rep(i, n) for (int i = 0; i < n; i++)
#define print(k) cout << k << endl

double findMedian(int n)
{
    vector<int> numbers(n);

    for (int i = 0; i < n; ++i)
    {
        numbers[i] = i + 1;
    }

    if (n % 2 != 0)
    {
        nth_element(numbers.begin(), numbers.begin() + n / 2, numbers.end());
        return numbers[n / 2];
    }
    else
    {
        nth_element(numbers.begin(), numbers.begin() + n / 2 - 1, numbers.end());
        int firstMiddle = numbers[n / 2 - 1];

        nth_element(numbers.begin(), numbers.begin() + n / 2, numbers.end());
        int secondMiddle = numbers[n / 2];

        return (firstMiddle + secondMiddle) / 2.0;
    }
}

void solve()
{
    int n, k;
    cin >> n >> k;
    if (k == n or k == 1)
    {
        cout << -1 << endl;
        return;
    }
    int diff = abs(findMedian(n) - k);
    
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve(); // Process each test case
    }

    return 0;
}
