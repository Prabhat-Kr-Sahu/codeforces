#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define pb(n) push_back(n)

int find_median(vector<int>& v) {
    int size = v.size();
    sort(v.begin(), v.end());
    return v[(size - 1) / 2];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        vector<int> b(n);

        // Read array `a`
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        // Read array `b` and collect indices where operations can be performed
        vector<int> indices_with_operations;
        for (int i = 0; i < n; i++) {
            cin >> b[i];
            if (b[i] == 1) {
                indices_with_operations.push_back(i);
            }
        }

        // Calculate the initial maximum value
        int initial_max = *max_element(a.begin(), a.end());

        // If no operations are possible, compute the score directly
        if (indices_with_operations.empty()) {
            vector<int> a_without_max = a;
            int max_index = max_element(a.begin(), a.end()) - a.begin();
            a_without_max.erase(a_without_max.begin() + max_index);
            int median = find_median(a_without_max);
            int score = initial_max + median;
            cout << score << endl;
            continue;
        }

        // Sort the indices with operations for easy access
        sort(indices_with_operations.begin(), indices_with_operations.end());

        // Maximum value increment process
        vector<int> a_copy = a;
        int max_index = max_element(a_copy.begin(), a_copy.end()) - a_copy.begin();
        int current_max = a_copy[max_index];

        // Increase maximum value to the maximum possible with `k` operations
        int max_increase = min((int)indices_with_operations.size(), k);
        current_max += max_increase;
        k -= max_increase;

        // Apply remaining operations to maximize the median
        vector<int> remaining_elements;
        for (int i : indices_with_operations) {
            remaining_elements.push_back(a[i] + 1);
        }
        while (k > 0 && !remaining_elements.empty()) {
            int incremented_value = remaining_elements.back() + 1;
            remaining_elements.pop_back();
            remaining_elements.push_back(incremented_value);
            k--;
        }

        // Calculate new median
        vector<int> a_with_max_increased = a;
        a_with_max_increased[max_index] = current_max;

        vector<int> all_elements = a_with_max_increased;
        for (int val : remaining_elements) {
            all_elements.push_back(val);
        }

        int new_median = find_median(all_elements);
        int new_score = current_max + new_median;

        cout << new_score << endl;
    }

    return 0;
}
