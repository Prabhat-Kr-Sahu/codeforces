#include <vector>
#include <iostream>
using namespace std;
int main() {
    int size;
    cin>> size;
    
    // input 
    string str;
    cin>> str;
    
    // storing in vector
    vector <string> v(size);
    
    
    for (int i=0; i<size; i++){
        v[i]=str[i];
    }
    
    // adding 1 for + and subtracting 1 for - ::
    int ans=0;
    
    
    for( auto i:v){
        if (i=="-"){
            ans=ans-1;
        }
        else{
            ans=ans+1;
        }
    }
    
    // return the mod 
    if (ans<0){
        cout<< ans*(-1);
    }
    
    else{
        cout<< ans;
    }
    
}