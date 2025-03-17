#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define print(k) cout << k << endl
#define debug(k) cout << "debug " << k << endl
#define print2 (k, l) cout << k << " " << l << endl
#define print3 (k, l, m) cout << k << " " << l << " " << m << endl

// for sorting the indices of the array based on the values of the array--

// vector<int> ord(n);
// iota(ord.begin(), ord.end(), 0);
// stable_sort(ord.begin(), ord.end(), [&](int a, int b){ return arr[a] > arr[b]; });
long long binExponentiate(long long base, long long exp)
{
    long long result = 1; // Start with the result as 1
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {                   // If the exponent is odd
            result *= base; // Multiply the result by base
        }
        base *= base; // Square the base
        exp /= 2;     // Divide the exponent by 2
    }
    return result;
}

long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

void eraseFirstTwoOccurrences(vector<int> &vec, int element)
{
    int count = 0; // Track how many occurrences have been erased

    for (auto it = vec.begin(); it != vec.end();)
    {
        if (*it == element)
        {
            it = vec.erase(it); // Erase the current element and get the next iterator
            count++;
            if (count == 2)
                break; // Stop after removing 2 occurrences
        }
        else
        {
            ++it; // Move to the next element
        }
    }
}

void solve()
{
    int n, l, r;
    cin >> n >> l >> r;
    vector<int> a(n);
    rep(i, n)
    {
        cin >> a[i];
    }

    // Convert to 0-based index
    l--, r--;

    // Extract the range and sort it
    vector<int> range(a.begin() + l, a.begin() + r + 1);
    sort(range.begin(), range.end());

    // Calculate the range size correctly
    int range_size = r - l + 1;

    // Determine how many to remove and how many to accumulate
    int remove = range_size / 2;
    int to_find = range_size - remove;

    // Sum the first 'to_find' elements of the sorted range
    int ans = accumulate(range.begin(), range.begin() + to_find, 0);

    // Separate the left and right sections
    vector<int> left(a.begin(), a.begin() + l);
    vector<int> right(a.begin() + r + 1, a.end());

    // Sort both left and right
    sort(left.begin(), left.end());
    sort(right.begin(), right.end());

    // Calculate the sums for the left and right sections
    int left_sum = accumulate(left.begin(), left.begin() + remove, 0);
    int right_sum = accumulate(right.begin(), right.begin() + remove, 0);

    // Add the minimum of left_sum and right_sum to the answer
    ans += min(left_sum, right_sum);

    // Output the result
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    // cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
