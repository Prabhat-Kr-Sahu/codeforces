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
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int, int> cnt;
    set<int> cnt_gr;

    // Input array and populate count map and set
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        cnt[arr[i]]++;
        if (cnt[arr[i]] >= 2)
        {
            cnt_gr.insert(arr[i]);
        }
    }

    if (cnt_gr.empty())
    {
        cout << -1 << endl;
        return;
    }

    sort(arr.begin(), arr.end()); // Sort the array once

    for (int val : cnt_gr)
    {
        int sum = 2 * val;
        int ele = -1; // Store the smallest element
        bool found = false;

        // Efficiently erase the first two occurrences of `val`
        vector<int> arr0;
        int occurrences = 0;
        for (int x : arr)
        {
            if (x == val && occurrences < 2)
                occurrences++;
            else
                arr0.push_back(x);
        }

        // Add the smallest element from the remaining array to `sum`
        if (!arr0.empty())
        {
            ele = arr0[0];
            sum += ele;
        }

        // Iterate to find the remaining two elements
        for (int j = 1; j < arr0.size(); j++)
        {
            if (arr0[j] < sum)
            {
                cout << val << " " << val << " " << ele << " " << arr0[j] << endl;
                found = true;
                break;
            }
            else if (j + 1 < arr0.size() && arr0[j + 1] < sum)
            {
                cout << val << " " << val << " " << arr0[j] << " " << arr0[j + 1] << endl;
                found = true;
                break;
            }
            // Update sum and ele for next iteration
            sum = sum - ele + arr0[j];
            ele = arr0[j];
        }

        if (found)
            return;
    }

    cout << -1 << endl;
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
