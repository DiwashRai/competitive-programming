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

    vector<int> vect;
    int input;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        vect.push_back(input);
    }
    sort(vect.begin(), vect.end());
    for (int x : vect)
    {
        cout << x << ' ';
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
