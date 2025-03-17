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
        cin>> n;
        cout<< ((n%3==1 or n%3==2) ? "First": "Second")<< endl;
    }
}