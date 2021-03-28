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

    int a[100000];
    int b[100000];
    int c[100000];

    for (int i = 0; i < n; ++i) cin >> a[i];
    for (int i = 0; i < n - 1; ++i) cin >> b[i];
    for (int i = 0; i < n - 2; ++i) cin >> c[i];

    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);

    for (int i = 0; i < n; ++i)
    {
        if (a[i] != b[i])
        {
            cout << a[i] << endl;
            break;
        }
    }

    for (int i = 0; i < n - 1; ++i)
    {
        if (b[i] != c[i])
        {
            cout << b[i] << endl;
            break;
        }
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
