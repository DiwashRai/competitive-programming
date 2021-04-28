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

    long long n, a, b, m, q;
    cin >> n;
    std::vector<long long> v;
    cin >> a;
    v.push_back(0);
    v.push_back(a);
    --n;
    while (n--)
    {
        cin >> b;
        a = a + b;
        v.push_back(a);
    }
    cin >> m;
    while (m--)
    {
        cin >> q;
        vector<long long>::iterator upper;
        upper = std::lower_bound(v.begin(), v.end(), q);
        cout << (upper- v.begin()) << std::endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
