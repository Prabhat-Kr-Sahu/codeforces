#include <iostream>
#include <map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        map<int, int> my_map;
        
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            my_map[a]++;
        }
        
        if (n <= 2) {
            cout << "Yes" << endl;
        } else if (my_map.size() > 2) {
            cout << "No" << endl;
        } else if (my_map.size() == 2) {
           
        #    odd n
        if(n%2==1){ 
            int half_n_plus_1 = (n + 1) / 2;
            int half_n_minus_1 = (n - 1) / 2;
            
            bool found_half_n_plus_1 = false;
            bool found_half_n_minus_1 = false;
            
            for (const auto& pair : my_map) {
                if (pair.second == half_n_plus_1) {
                    found_half_n_plus_1 = true;
                }
                if (pair.second == half_n_minus_1) {
                    found_half_n_minus_1 = true;
                }
            }
            
            if (found_half_n_plus_1 && found_half_n_minus_1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
        else{
            int half_n_plus_1 = n  / 2;
            int half_n_minus_1 = n / 2;
            
            bool found_half_n_plus_1 = false;
            bool found_half_n_minus_1 = false;
            
            for (const auto& pair : my_map) {
                if (pair.second == half_n_plus_1) {
                    found_half_n_plus_1 = true;
                }
                if (pair.second == half_n_minus_1) {
                    found_half_n_minus_1 = true;
                }
            }
            
            if (found_half_n_plus_1 && found_half_n_minus_1) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
        } else if (my_map.size() == 1) {
            cout << "Yes" << endl;
        }
    }
    return 0;
}
