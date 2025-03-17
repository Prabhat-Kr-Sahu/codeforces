#include <iostream>
#include <vector>
#include <algorithm> // for std::next_permutation
using namespace std;

string perm(int n, int k) {
    
    vector <int> nums;
     for (int i = 1; i <= n; ++i) {
        nums.push_back(i);
    }
    
   
    do {
        // Process the current permutation
        int sum=0;
        for(int i ;i< n ; i++) {
            sum=sum+ abs(nums[i] - i+1);

        }
        if (sum==k){
            cout<< "Yes"<<endl;
            for (int  i: nums){
                cout<< i<< " ";
            }
            return "Yes";
        }
        
    } while (next_permutation(nums.begin(), nums.end()));
     
    return "No";      
}

int main(){
    int t;
    cin>>t;

    while(t--){

        int n;
        int k;
        cin>> n>> k;
          
        perm(n,k);

    }
}