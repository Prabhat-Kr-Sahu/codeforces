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
          int n;
          cin>>n;
          vector <int> arr(n);
       
          loop(n){
            cin>> arr[i];
          }
          
          cout<< ((arr[0]==  1) ? "yes": "NO")<< endl;
    }

}