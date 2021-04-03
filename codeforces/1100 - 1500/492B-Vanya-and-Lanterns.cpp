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

    cout.precision(9);
    int n, l;
    cin >> n >> l;

    std::vector<int> v;
    int input;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        v.push_back(input);
    }

    if (n == 1)
    {
        cout << fixed << max(v[0] * 1.0, (l - v[0]) * 1.0);
        return 0;
    }

    sort(v.begin(), v.end());
    int max_diff = v[1] - v[0];
    for (int i = 1; i < n - 1; ++i)
    {
        int curr = v[i + 1] - v[i];
        if (curr > max_diff) max_diff = curr;
    }

    double output = max({max_diff / 2.0, v.front() * 1.0, l - v.back() * 1.0});
    cout << fixed <<output;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
