#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

   while(t--){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a and a==b ){
        cout<<"yes"<<endl;
    }
    else if(a+b+2<=n){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
   }
}
