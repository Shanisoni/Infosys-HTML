#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    pair<long long, long long> getMinMax(long long a[], int n) {
            long long minVal = LLONG_MAX;
        long long maxVal = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            minVal = min(minVal, a[i]);
            maxVal = max(maxVal, a[i]);
        }

        return make_pair(minVal, maxVal);
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) 
    {
        int n;
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        
        Solution ob;
        pair<long long, long long> pp = ob.getMinMax(a, n);
        
        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}