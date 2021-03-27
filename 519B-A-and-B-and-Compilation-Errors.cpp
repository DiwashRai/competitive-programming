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

    int n;
    cin >> n;

    int a[10000] = {1000};
    int b[10000] = {1000};
    int c[10000] = {1000};

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - 1; ++i) cin >> b[i];
    for (int i = 0; i < n - 2; ++i) cin >> c[i];

    sort(a, a + n);
    sort(b, b + n);
    sort(c, c + n);

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
