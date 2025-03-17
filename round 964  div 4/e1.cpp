#include <bits/stdc++.h>
using namespace std;

#define MAX 200001

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[MAX] = {0};

    int x = 1;
    for (int i = 0; i < 12; i++)
    {
        for (int j = x; j < min(3 * x, MAX) ; j++)
        {
            arr[j] = arr[j - 1] + i +1;
        }

        x *= 3;
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
