#include <bits/stdc++.h>
using namespace std;


#define loop(n) for(int i = 0; i < n; ++i) { cin >> arr[i]; }
#define endl '\n'

int main() {
    int t;
    cin >> t; 

    while (t--) {
            int n;
            cin>>n;

            string s;
            cin>> s;
            int c_a=0;
            int c_b=0;
            int c_c=0;
            int c_d=0;
            int i=0;
            for (int i=0; i< 4*n; i++ ){
                   if(s[i]=='A' and c_a< n){
                       c_a++;
                   }
                   else if(s[i]=='B' and c_b< n){
                       c_b++;
                   }
                   else if(s[i]=='C' and c_c< n){
                       c_c++;
                   }
                   else if(s[i]=='D' and c_d< n){
                       c_d++;
                   }

            }
            cout<< c_a+c_b+c_c+c_d <<endl;
    }
    }
