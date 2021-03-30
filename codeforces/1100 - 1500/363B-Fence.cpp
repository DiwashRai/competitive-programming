#include <bits/stdc++.h>

using namespace std;

int main() {
    // turn off buffer sync between c and c++ streams. Decouple cin and cout
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int n, k;
    cin >> n >> k;

    int arr[150000];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    int m = 0;
    long curr = 0;
    for (int i = m; i < k; ++i) curr += arr[i];
    long min = curr;

    for (int i = 1; i < n - (k - 1); ++i)
    {
        curr = curr - arr[i - 1] + arr[i + (k - 1)];
        if (curr < min)
        {
            min = curr;
            m = i;
        }
    }

    cout << m + 1 << endl;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
