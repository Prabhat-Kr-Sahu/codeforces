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
        long long n,k;
        cin>>n>>k;
        if(k%2==0){
            if(n%2==0){
                cout<<"YES"<<endl;
            }
            else{
                cout<<"NO"<<endl;
            }

        }
        else{
            if(n%2==0){
                  cout<<"YES"<<endl;
            }
            else{
                if(n<k){
                      cout<<"No"<<endl;
                }
                else{
                      cout<<"YES"<<endl;
                }
            }
        }
    }
}