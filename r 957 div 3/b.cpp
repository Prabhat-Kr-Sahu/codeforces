#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(){

    int t;
    cin>> t;
    while(t--){
        int n,k;
        cin>> n>>k;

        vector <int> arr(k) ;
        for(int i =0; i<k; i++){
          
                cin>> arr[i];
          
        }

        sort(arr.begin(), arr.end());


        int sum=0;
        for(int i=0; i<k-1;i++){
            sum=sum+2*arr[i]-1;

        }
       
        cout<< sum<< endl;
    }
}