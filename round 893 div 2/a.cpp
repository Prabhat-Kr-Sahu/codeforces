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
        int a,b,c;
        cin>> a>>b>>c;
        if(a>b){
            cout<< "First"<<endl;
        }
        else if(a<b){
            cout<<"Second"<<endl;
        }
        else{
            if(c%2==1){
                cout<<"First"<<endl;
            }
            else{
                cout<<"Second"<<endl;
            }
        }
    }
}