#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
#define loop(i, n) for (int i = 0; i < n; i++)
#define endl "\n"
#define pb push_back

int main(){
    int t;
    cin>> t;
    while(t--){
       int n,k;
      
       cin>> n>> k;
       int arr[n];
       int i=0;
       loop(i,n){
          cin>> arr[i];
       }
      
       int m=n-1;
    
       loop(i,m){
         if(arr[i]>arr[i+1])
         {
           break;
         }
         
       }
   
       // if it is not sorted  but k is greater then can be sorted-
       if (i<n-1 and k>1){
        cout<< "yes"<<endl;;
       }
       // if already sorted-
       else if(i==n-1 ){
         cout<< "yes"<< endl;
       }
       // if not sorted but also k <=1 
       else {
       cout<< "no"<< endl;
       }
    }

}    
