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

    int t;
    cin >> t;

    while (t--)
    {
        int n, e;
        cin >> n;
        std::vector<int> v;
        while (n--)
        {
            cin >> e;
            v.push_back(e);
        }
        std::sort(v.begin(), v.end());
        for (auto x : v)
            cout << x << ' ';
        cout << std::endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
