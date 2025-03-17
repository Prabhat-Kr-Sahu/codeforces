#include <bits/stdc++.h>
using namespace std;

#define loop(n)                 \
    for (int i = 0; i < n; ++i) \
    {                           \
        cin >> arr[i];          \
    }
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
        vector<int> arr(n);
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];

            if (i != 0)
            {

                if (arr[i - 1] > arr[i])
                {

                    ans.push_back(1);
                    ans.push_back(arr[i]);
                }
                else
                {
                    ans.push_back(arr[i]);
                }
            }
            else
            {
                ans.push_back(arr[i]);
            }
        }
        cout << ans.size() << endl;
        for (int i = 0; i < ans.size(); i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
}
