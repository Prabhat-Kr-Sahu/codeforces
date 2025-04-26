#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl "\n"


vector<int> computeDistances(const vector<bool>& v) {
    int n = v.size();
    vector<int> dist(n, INT_MAX);

    int last_true = -1;
    // Forward pass (Left to Right)
    for (int i = 0; i < n; i++) {
        if (v[i]) last_true = i;
        if (last_true != -1) dist[i] = min(dist[i], abs(i - last_true));
    }

    last_true = -1;
    // Backward pass (Right to Left)
    for (int i = n - 1; i >= 0; i--) {
        if (v[i]) last_true = i;
        if (last_true != -1) dist[i] = min(dist[i], abs(i - last_true));
    }

    return dist;
}

void maximizeMinDistance(vector<bool>& v, int k) {
    int n = v.size();
    vector<int> dist = computeDistances(v);

    // Priority queue to pick the position with the max distance first
    priority_queue<pair<int, int>> pq; 

    for (int i = 0; i < n; i++) {
        if (!v[i]) pq.push({dist[i], i});
    }

    // Set k positions to true
    while (k > 0 && !pq.empty()) {
        int pos = pq.top().second;
        pq.pop();
        v[pos] = true; // Mark position as true
        k--;

        // Recompute distances after each change
        dist = computeDistances(v);
        while (!pq.empty()) pq.pop();
        for (int i = 0; i < n; i++) {
            if (!v[i]) pq.push({dist[i], i});
        }
    }
}
bool canSeat(int m, int k, int maxLen) {
    int placed = 0, lastPlaced = -1;

    for (int i = 0; i < m; i++) {
        if (lastPlaced == -1 || i - lastPlaced >= maxLen) {
            placed++;       // Place a participant
            lastPlaced = i; // Update last placed position
        }
        if (placed == k) return true; // Successfully placed all
    }
    return false; // Could not place all k participants
}
bool canSeat(int m, int k, int maxLen) {
    int count = 0, last = -maxLen; // Place first person at least maxLen apart
    
    for (int i = 0; i < m; i++) {
        if (i - last >= maxLen) { // Ensure spacing
            count++;
            last = i;
        }
        if (count >= k) return true;
    }
    
    return false;
}



int minLongestBench(int m, int k) {
    int low = 1, high = m, ans = m;
    
    while (low <= high) {
        int mid = (low + high) / 2;
        
        if (canSeat(m, k, mid)) {
            ans = mid;  // Try to minimize max length
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    
    return ans;
}

void solve() {
    int n,m,k;
    cin>>n>>m>>k;
    k=k/n+ k%n;
    vector<bool> v(m);
    int l=0;
    int r= m-1;
    if(m==1){
        cout<<1<<endl;
        return;
    }
    if(m==2){
        if(k>1){
            cout<<2<<endl;
            return;
        }
        else{
            cout<<1<<endl;
            return;
        }
    }
    if(k==m){
        cout<<m<<endl;
        return;
    }
    // k-=2;
    

    cout << minLongestBench(m,k) << endl;
    
    // v[0]= true;
    // v[m-1]= true;
    // cout<<"k : "<<k<<endl;

    
    // if(k>0) maximizeMinDistance(v,k);
    // // for(int i=0; i<m ; i++){
    // //     cout<< v[i]<< ' ';
    // // }
    // // cout<<endl;

    // int max_length = 0, current_length = 0;
    
    // for (bool val : v) {
    //     if (val) {
    //         current_length++;
    //     } else {
    //         max_length = max(max_length, current_length);
    //         current_length = 0;
    //     }
    // }
    // max_length= max(current_length, max_length);
    // cout<<max_length<<endl;
}

int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
