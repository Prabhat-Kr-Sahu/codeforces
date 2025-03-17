#include <iostream>
using namespace std;

int main(){

    int t;
    cin>> t;
    while(t--){
        int n,m,k;

        cin>>n>> m>> k;

        string s;
        cin>> s;

        // for last part
       
        k--;
        int i=0;
        while(i < n){
            
            // land-
            if(s[i]== 'L'){
                // jump max
                if(i+m < n){
                    i=i+m;
                    int prev=i;
                    if(s[i] == 'C'){
                            i=i-m +1 ;
                            // finding nearest land and then
                            while(s[i]!='L' && i<=prev){
                                i++;
                            }

                            // if no land  found:
                            if(i== prev){
                                cout<<"NO"<< endl;
                                break;
                            }


                    }

                }
                
                // if passing the spot --
                else{  
                       
                    // if smaller than n::
                       if(i+m-abs(i+m-n) < n){ 
                          i=i+m-abs(m-n);


                          // croc at i;
                          if(s[i] == 'C'){
                            i=i-m-abs(m-n)+1;

                            int prev =i;
                            // finding nearest land and then
                            while(s[i]!='L' && i<=prev){
                                i++;
                            }

                            // if no land  found:
                            if(i== prev){
                                cout<<"NO"<< endl;
                                break;
                            }
                            
                        }

                        else{
                            i=i++;
                        }
                    }
                    // reached n:
                    else{
                        
                            cout<<"YES"<<endl;
                            break;
                    
                        }
                    }
                }
            
            
            // water:
            else if( s[i]== 'W'){
                   i++;
                   k--;

                   // croc at i;
                   if(s[i] == 'C' && i<n){
                            
                            cout<< "NO"<< endl;
                            break;
                    }
            }
            
            // croc--
            else{
                  cout<< "NO"<< endl;
                  break;
            }

            // reached final:
            if(i==n-1){
                if(k>0){
                     cout<<"YES"<<endl;
                            break;
                }
                else{
                            cout<<"NO"<<endl;
                            break; 
                        }
            }
        }
        }
}
