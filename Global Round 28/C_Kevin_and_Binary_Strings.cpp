#include <bits/stdc++.h>
using namespace std;
#define int long long
#define print(x) cout << x << endl

void solve()
{
    string s;
    cin >> s;
    int c1 = 0;
    string s0 = s;
    int n = s.size();

    // Remove the first occurrence of '0' and calculate c1
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            s=s.substr(i);
            // print(s);
            // print("dddddd");
            c1 += i;
            // print(c1);
            break;
        }
    }
    if(c1==0){
        cout<<1<<" "<<n<<" "<<1<<" "<<1<<endl;
        return;
    }



    int case1 = 0;
    int window = min(c1, n - c1);
    if (c1 > n - c1)
        case1 = 1;

    // Complement the first c1 characters
    for (int i = 0; i < window; i++)
    {
        s[i] = (s[i] == '0') ? '1' : '0';
    }
    
    int startIndex = -1, endIndex = -1; // Default values if not found

    // Search for the substring while modifying s
    if (case1 == 1)
    {
        while (window > 0)
        {
            size_t pos = s0.find(s.substr(0,window));
            // print(s.substr(0,window));
            // print(window); // Corrected substr usage
            if (pos != string::npos)
            {
                startIndex = pos+1;        // 1-based index
                endIndex = pos + window; // Calculate end index
                break;
            }
            else
            {
                s.pop_back(); // Remove the last character
                window--;
            }
        }

        cout << 1 << " " << n << " " << startIndex << " " << endIndex << endl;
    }

    else
    {
        while (window > 0)
        {   
            
            size_t pos = s0.find(s.substr(0,window));
            // print(s.substr(0,window));
            // print(window);
            // Corrected substr usage
            if (pos != string::npos)
            {
                startIndex = pos+1; // 1-based index
                endIndex = s0.size() - window ;

                break;
            } // Calculate end index

            else
            {
                s.pop_back(); // Remove the last character
                window--;
            }
        }
        cout << 1 << " " << n << " " << startIndex << " " << endIndex << endl;
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}