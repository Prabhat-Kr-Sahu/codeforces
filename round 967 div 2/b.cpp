#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

vector<int> generate_permutation(int n)
{
    vector<int> permutation;

    for (int i = n; i >= 1; i -= 2)
    {
        permutation.push_back(i);
    }

    for (int i = 2; i <= n - 1; i += 2)
    {
        permutation.push_back(i);
    }

    return permutation;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 == 1)
        {
            int arr[n];
            vector<int> result = generate_permutation(n);

            for (int num : result)
            {
                cout << num << " ";
            }
            cout << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}