    #include <vector>
    #include <iostream>
    #include <algorithm>
     
    using namespace std;
     
    
    
     
    int main() {
        int t;
        cin >> t;
        
        while (t--) {
            int n;
            cin >> n;
            
            int coins=0;
            vector<int> a(n);

            for (int i=0; i<n;i++){
                cin>>a[i];
            } 
            
            while(n>0){
                if (a[n-2]<= a[n-1] && n-2>=0){
                    coins+=a[n-1];
                    n--;

                }
                
                // else if (a[n-1] == a[n-2] && n-2>=0){
                //     coins+=a[n-1];
                //     n=n-2;
                // }
                else if(a[n-2] > a[n-1] && n-2>=0){
                    coins+=a[n-1];
                    int i=0;
                    while( a[n-i-2] > a[n-1-i] && n-i-2>=0) {
                           a[n-2-i]=a[n-2-i]-a[n-1];
                            i++;
                    }
                }
                                                          

            }

            cout<< coins<<endl;

        }

        return 0;
    } 