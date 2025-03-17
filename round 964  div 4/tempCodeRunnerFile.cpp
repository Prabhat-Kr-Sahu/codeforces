#include <bits/stdc++.h>
using namespace std;

#define MAX 200001

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[MAX+1] = {0};

    int x = 1;
    for (int i = 1; i < 12; i++)
    {
        for (int j = x; j < min(3 * x + 1, MAX+1); j++)
        {
            arr[j] = arr[j - 1] + i;
        }
        x *= 3;
        if (x >= MAX+1)
        {
            break;
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        int l, r;
        cin >> l >> r;

        cout << arr[r] - 2 * arr[l - 1] + arr[l] << endl;
    }
}