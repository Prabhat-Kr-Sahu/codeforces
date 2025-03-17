#include  <iostream>
using namespace std;
int main(){
    int t;
    cin>> t;

    for (int d=0;  d<t;d++){
              int n;
              cin>> n;
              int max_sum=0;
              int best_x=0;

              for (int x=2; x<=n; x++){
                int sum=0;
                int k=1;

                while(k*x<=n){
                    sum=sum+k*x;
                    k++;
                }
                if(max_sum< sum){
                    max_sum=sum;
                    best_x=x;
                }
              }
              cout<<best_x<<endl;


    }

    return 0;

}