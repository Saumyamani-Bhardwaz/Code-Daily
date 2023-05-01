//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<long long> printFirstNegativeInteger(long long int arr[],
                                             long long int n, long long int k);

// Driver program to test above functions
int main() {
    long long int t, i;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        long long int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        long long int k;
        cin >> k;

        vector<long long> ans = printFirstNegativeInteger(arr, n, k);
        for (auto it : ans) cout << it << " ";
        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

vector<long long> printFirstNegativeInteger(long long int arr[], long long int n, long long int k) {
    int i = 0, j = 0;
    vector<long long> fNeg;
    while (j < n) {
        if (j - i + 1 < k) j++;
        else if (j - i + 1 == k) {
            int m;
            long long neg = 0;
            for (m = i; m <= j; m++) {
                if (arr[m] < 0) {
                    neg = arr[m];
                    break;
                }
            }
            fNeg.push_back(neg);
            i++;
            j++;
        }
    }
    return fNeg;
}
