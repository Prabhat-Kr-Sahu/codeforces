#include <iostream>
#include <string>
using namespace std;

void find(string& a, int n) {
    int l = -1;
    int r = -1;

    for (int i = 0; i < n - 1; i++) {
        if (a[i] == '0' && a[i + 1] == '0' && l < 0) {
            l = i;
        }
        else if (a[i] == '0' && a[i + 1] == '0') {
            r = i + 1;
        }
        else if (a[i] == '0' && a[i + 1] == '1') {
            string sub1 = a.substr(0, l);
            string sub2 = a.substr(r, n - r);
            a = sub1 + "0" + sub2;
            n = n - (r - l) + 1;
            i = l + 1;
            l = -1; 
            r = -1;
        }
    }
    return;
}

void ops(string a, int n) {
    find(a, n);

    int c1 = 0;
    int c0 = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == '0') {
            c0++;
        } else {
            c1++;
        }
    }

    if (c1 <= c0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string a;

        cin >> n;
        cin>> a;

        ops(a, n);
    }

    return 0;
}