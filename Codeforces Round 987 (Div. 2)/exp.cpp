#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)
#define rep(i, n) for (int i = 0; i < n; i++)
#define rep1(i, n) for (int i = 1; i <= n; i++)
typedef long long ll;
#define int long long
#define pi (3.141592653589)
#define mod 1000000007
#define float double
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define rrep(i, n) for (int i = n - 1; i >= 0; i--)
#define print(k) cout << k << endl
#define debug(k) cout << "debug " << k << endl
#define print2(k, l) cout << k << " " << l << endl
#define print3(k, l, m) cout << k << " " << l << " " << m << endl

long long binExponentiate(long long base, long long exp)
{
    long long result = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
        {
            result *= base;
        }
        base *= base;
        exp /= 2;
    }
    return result;
}

long long factorial(int n)
{
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}
void printNumbers(long long n)
{   
    int i = 0;
    int j = 3;
    while (i<n ){
        if(i==0 or i==9 or i==25){
            cout<<1<<" ";
            i++;
            }
        else if(i==10 or i==26 ){
            cout<<2<<" ";
            i++;
            }
        else{
            cout<<j<<" "<<j<<" ";
            j++;
            i+=2;
        }
   
    }
    
}

void solve()
{
    int n;
    cin >> n;
    if (n % 2 == 0)
    {
        for (int i = 0; i < n / 2; i++)
        {
            cout << i + 1 << " " << i + 1 << " ";
        }
        cout << endl;
    }
    else
    {   
        
        if (n >=26)
        {
            printNumbers(n);
            cout << endl;
        }
        else{
            print(-1);
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
