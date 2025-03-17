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
    
    vector<vector<int>> targetMatrix = {
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
    {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
    {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
    {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
    {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
};

    int t;
    cin >> t;

    while (t--)
    {
        vector<vector<char>> target(10, vector<char>(10));
        int p = 0;

        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < 10; j++)
            {
                
                cin >> target[i][j];
                if(target[i][j]=='X'){
                     p=p+ targetMatrix[i][j];
                }
            }
        }

        
            cout << p << endl;
        }
    }
