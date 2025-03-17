#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

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
        int s = 0;
        bool flag = true;
        int arr[n];
        bool same = true;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        sort(arr, arr + n, greater<int>());
        if (arr[0] == arr[1] and n > 2)
        {

            bool flag = false;
            for (int i = 2; i < n; i++)
            {
                if (arr[0] != arr[i])
                {
                    flag = true;
                    swap(arr[1], arr[i]);
                    break;
                }
            }
            if (flag == false)
            {
                cout << "NO" << endl;
            }
            else
            {

                cout << "Yes" << endl;
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << ' ';
                }
                cout << endl;
            }
        }
        else if (arr[0] == arr[1] and n == 2)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "Yes" << endl;
            for (int i = 0; i < n; i++)
            {
                cout << arr[i] << ' ';
            }
            cout << endl;
        }
    }
}