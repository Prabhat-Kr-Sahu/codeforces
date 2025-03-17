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
        int a, b, x_1, y_1, x_2, y_2;
        cin >> a >> b;
        cin >> x_1 >> y_1;
        cin >> x_2 >> y_2;

        int c = 0;

        set<pair<int, int>> st1, st2;

        // Inserting pairs into st1
        st1.insert({x_1 + a, y_1 + b});
        st1.insert({x_1 + a, y_1 - b});
        st1.insert({x_1 - a, y_1 + b});
        st1.insert({x_1 - a, y_1 - b});
        st1.insert({x_1 + b, y_1 + a});
        st1.insert({x_1 + b, y_1 - a});
        st1.insert({x_1 - b, y_1 + a});
        st1.insert({x_1 - b, y_1 - a});

        // Inserting pairs into st2
        st2.insert({x_2 + a, y_2 + b});
        st2.insert({x_2 + a, y_2 - b});
        st2.insert({x_2 - a, y_2 + b});
        st2.insert({x_2 - a, y_2 - b});
        st2.insert({x_2 + b, y_2 + a});
        st2.insert({x_2 + b, y_2 - a});
        st2.insert({x_2 - b, y_2 + a});
        st2.insert({x_2 - b, y_2 - a});

        for (auto k : st1)
        {
            
            
                if (st2.find(k) != st2.end())
                {
                    c++;
            
                }
            
        }
        cout << c << endl;
    }
}