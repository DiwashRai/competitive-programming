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

    vector<int> scores;
    for (int i = 0; i < n; ++i)
    {
        int x;
        cin >> x;
        scores.push_back(x);
    }

    int cutoff = scores[k-1];
    int next_round = 0;
    for (int i = 0; i < n; ++i)
    {
        if (scores[i] >= cutoff && scores[i] > 0)
            ++next_round;
    }

    cout << next_round;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
