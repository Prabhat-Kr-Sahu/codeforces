#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int curr_x = 0, curr_y = 0;

    pair<int, int> curr_vac_table = {0, 0};

    int curr_vac_seats = 4;
    int curr_vac_seats_next = 4;
    int diagonal = 1;

    int next_x = 0, next_y = diagonal;
    int occupied_tables = 0;

    for (auto i : v)
    {
        if (i == 0)
        {
            cout << 3*curr_x + 1 << " " << 3*curr_y + 1 << endl;
            curr_vac_seats_next--;
            curr_vac_seats = curr_vac_seats_next;
            curr_x = next_x;
            curr_y = next_y;
            occupied_tables++;
            int tables = (diagonal * (diagonal + 1)) / 2 - occupied_tables;
            // cout<< "tables = " << tables << endl;
            if (tables < 0)
            {
                diagonal++;
                next_x = 0;
                next_y = diagonal;
            }
            else{
                next_x = next_x + 1;
                next_y = next_y - 1;
            }
        }
        else
        {
            // t= 1

            if (curr_vac_seats == 4)
            {
                cout << 3 * curr_vac_table.first + 1 << " " << 3 * curr_vac_table.second + 1 << endl;
                curr_vac_seats--;
            }
            else if (curr_vac_seats == 3)
            {
                cout << 3 * curr_vac_table.first + 1 << " " << 3 * curr_vac_table.second + 2 << endl;
                curr_vac_seats--;
            }
            else if (curr_vac_seats == 2)
            {
                cout << 3 * curr_vac_table.first + 2 << " " << 3 * curr_vac_table.second + 1 << endl;
                curr_vac_seats--;
            }
            else if (curr_vac_seats == 1)
            {
                cout << 3 * curr_vac_table.first + 2 << " " << 3 * curr_vac_table.second + 2 << endl;
                curr_vac_seats = curr_vac_seats_next;
                occupied_tables++;
                int tables = (diagonal * (diagonal + 1)) / 2 - occupied_tables;
                if (tables < 0)
                {
                    diagonal++;
                    curr_vac_table = {0, diagonal};
                    
                }
                curr_vac_table = {curr_vac_table.first + 1, curr_vac_table.second - 1};
                curr_x = next_x;
                curr_y = next_y;
                next_x= next_x +1;
                next_y = next_y-1;
            }
            
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}
