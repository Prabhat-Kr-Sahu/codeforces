#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define loop(n) for (int i = 0; i < n; i++)
#define endl "\n"
#define pb push_back

int main(){
    int t;
    cin>> t;
    while(t--){
         int n,x;
       
         
          cin>> n>> x;
            int arr[n];
        loop(n){ 
            cin>> arr[i];
        }
        
        int maxm=arr[0];
        loop(n-1){
            
            if (arr[i+1]-arr[i]> maxm){
                maxm=arr[i+1]-arr[i];
                
            }
            // cout<< maxm<<endl;
        }

        
        cout << max(2*(x-arr[n-1]), maxm) << endl ;
       
 
    }
}