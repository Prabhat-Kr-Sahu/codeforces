#include <bits/stdc++.h>
using namespace std;

#define loop(n) for(int i = 0; i < n; ++i) { cin >> arr[i]; }
#define endl '\n'

int main() {
    int t;
    cin >> t; 

    while (t--) {
            int n,k;
            cin>>n>>k;
            int arr[n];
            int max = -1;
          
            int time = 0;
            
            for (int i=0; i< n; i++){
                cin>> arr[i];
                if(arr[i]> max){
                    max= arr[i];
                }
            }
            
            int c=0;
            for(int i=0; i<n; i++){
                for (int j=0; j<n; j=j+2){
                   if( arr[i]!= max){

                      if (max=<arr[i]+ j*k < max+k) {
                            c++;
                      }
                      if(c==n){

                      }
                }
                }
            }
}