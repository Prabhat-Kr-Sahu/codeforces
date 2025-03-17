#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

bool haveCommonLetter(const string &s1, const string &s2)
{
    unordered_set<char> set1(s1.begin(), s1.end());
    for (char c : s2)
    {
        if (set1.find(c) != set1.end())
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n, q;
        cin >> n >> q;
        string arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        pair<int, int> queries[q];

        int min_cost = n+1;
        bool  posss=false;
        for (int i = 0; i < q; i++)
        {
            cin >> queries[i].first >> queries[i].second;
            bool pos = false;
            int cost = 0;
            if (haveCommonLetter(arr[queries[i].first - 1], arr[queries[i].second]))
            {
                pos = true;
                poss=true;
                cost = abs(arr[queries[i].first - 1] - arr[queries[i].second])
                if(cost<min_cost){
                     min_cost=cost;
                }

            }
            else{
                if()
                for(int)
            }
        }
    }
}