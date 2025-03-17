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
          string arr;
          cin>> arr;
                  
          int c_dot=0;
          bool flag=false;
          
          if(arr.size()>2){
            if(arr[0]=='.'){
            c_dot++;
          }
          if(arr[n-1]=='.'){
            c_dot++;
          }
          for(int i=1; i<n-1; i++){
            if(arr[i]=='.'){
                c_dot++;
            
               if (arr[i+1]=='.' and arr[i-1]=='.'){
                   flag=true;
                   break;
            }
           }
         
        }
        }
        else{
            loop(n){
                if(arr[i]=='.'){
                    c_dot++;
                }
            }
        }
 cout<< ((flag) ? 2 : c_dot)<< endl;
    }
}
