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
        int l, r, L, R;
        cin >> l >> r >> L >> R;

        // Calculate the minimum of the range lengths for the subsets
        int subset_length = std::min(r - l + 1, R - L + 1);

        if (r < L || R < l)
        {
            // If the segments don't overlap, only one door needs to be locked
            cout << 1 << endl;
        }
        else if ((l <= L && r >= R) || (L <= l && R >= r))
        {
            // If one segment is fully inside the other
            bool hasSharedLimit = (l == L || l == R || r == L || r == R);
            if (l == L && r == R)
            {
                cout << subset_length - 1 << endl;
            }
            else if (hasSharedLimit)
            {
                cout << subset_length << endl;
            }
            else
            {
                cout << subset_length + 1 << endl;
            }
        }
        else
        {
            // If the segments overlap partially, calculate the minimum distance
            int overlap_distance = min(abs(r - L), abs(R - l));
            cout << overlap_distance + 2 << endl;
        }
    }

    return 0;
}
