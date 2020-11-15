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

    int n, a;
    int curr_score = 0, max_score = 0, prev = 0;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> a;
        if (a >= prev) {
            ++curr_score;
        }
        else {
            if (curr_score > max_score)
                max_score = curr_score;

            curr_score = 1;
        }
        prev = a;
    }
    if (curr_score > max_score)
        cout << curr_score;
    else
        cout << max_score;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
