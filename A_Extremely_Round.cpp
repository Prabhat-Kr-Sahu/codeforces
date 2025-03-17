#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    int arr[1000000];
    arr[0] = 0;
    for (int i = 1; i < 1000000; i++)
    {
        string k = to_string(i);
        int c = 0;
        for (auto m : k)
        {
            if (m != '0')
            {
                c++;
            }
            if (c == 2)
            {
                break;
            }
        }
        if (c == 1)
        {
            arr[i] = arr[i - 1] + 1;
        }
        else
        {
            arr[i] = arr[i - 1];
        }
    }

   
    while (t--)
    {
        int n;
        cin >> n;
        cout << arr[n] << endl;
    }

    return 0;
}
