#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>> t;
    while(t--){
         int n,k;
         int c=0;

         cin>> n>> k;
         
         for (int i=0;i<n; i++ ){
            if(k<=0){
          
                break;
            }

            else if(i==0){
                c++;
                k=k-n;
            }
            else{
                 if(k-(n-i)<=0){
                    c++;
                    break;
                    
                 }
                 else{
                       k=k-2*(n-i);
                       c=c+2;
                 }
            }
        }
        cout << c<< endl;

    }
}