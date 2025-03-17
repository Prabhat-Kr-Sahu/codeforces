// #include <bits/stdc++.h>
// using namespace std;

// #define loop(n)                 \
//     for (int i = 0; i < n; ++i) \
//     {                           \
//         cin >> arr[i];          \
//     }
// #define endl '\n'
// #define pb(n) push_back(n)

// int main()
// {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int arr[4];

//         loop(4);
//         int c_1 = 0;
//         int c_2 = 0;
//         if (arr[0] > arr[2])
//         {
//             c_1++;
//         }
//         if (arr[0] > arr[3])
//         {
//             c_1++;
//         }
//         if (arr[1] > arr[2])
//         {
//             c_2++;
//         }
//         if (arr[1] > arr[3])
//         {
//             c_2++;
//         }

//         // same or both less--
//         if (c_1 == 0 and c_2 == 0)
//         {
//             cout << 0 << endl;
//         }
//         //

//         else if ((c_1 ==1 and c_2 == 2) or (c_1 ==2 and c_2 == 1))
//         {
//             cout << 2 << endl;
//         }

//         else if ((c_1 == 1 and c_2 == 0) or (c_1 == 0 and c_2 == 1))
//         {
//             cout << 0 << endl;
//         }

//          else if (c_1 == 2 and c_2 == 2)
//         {
//             cout << 4 << endl;
//         }

//     }
// }

#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;

        int winCount = 0;

        vector<int> suneetCards = {a1, a2};
        vector<int> slavicCards = {b1, b2};

        for (int i = 0; i < 2; ++i)
        {
            for (int j = 0; j < 2; ++j)
            {
                int s1 = suneetCards[i];
                int s2 = suneetCards[1 - i];
                int sl1 = slavicCards[j];
                int sl2 = slavicCards[1 - j];

                int suneetWins = 0;
                int slavicWins = 0;

                if (s1 > sl1)
                    suneetWins++;
                else if (s1 < sl1)
                    slavicWins++;

                if (s2 > sl2)
                    suneetWins++;
                else if (s2 < sl2)
                    slavicWins++;

                if (suneetWins > slavicWins)
                {
                    winCount++;
                }
            }
        }

        cout << winCount << endl;
    }

    return 0;
}
