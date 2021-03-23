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

    int n, x;
    cin >> n;

    int arr[5] = {0};
    while (cin >> x)
        ++arr[x];

    arr[1] = max(arr[1] - arr[3], 0);
    cout << arr[4] + arr[3] + (2 * arr[2] + arr[1] + 3)/4;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
