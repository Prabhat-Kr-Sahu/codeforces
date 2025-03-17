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

    
        int n;
        cin>> n;
        int arr[n];
        int min_diff=100001;
        for(int i=0; i<n; i++){
            cin>> arr[i];
            if(arr[i]==0 or min_diff==0){
                min_diff=0;
            }
            else if( abs(arr[i])< min_diff){
                min_diff=abs(arr[i]);
           }
        }
        cout<<min_diff<<endl;
    
}