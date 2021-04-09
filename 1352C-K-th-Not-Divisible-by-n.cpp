#include <bits/stdc++.h>

using namespace std;

int solve(int n, int k)
{
    // int c = 0;
    // for (int i = 1; i < 2000000001; ++i)
    // {
    //     if (i % n != 0) ++c;
    //     if (c == k) return i;
    // }
    // return -1;
    return (k / (n - 1)) * n + k % n;
}

int main() {
    // turn off buffer sync between c and c++ streams. Decouple cin and cout
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int n, k;
        cin >> n >> k;
        int ans = solve(n, k);
        cout << ans << endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
