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

    std::string t;
    cin >> t;
    for (int i = 0; i < t.size(); ++i)
    {
        if (i == 0 && t[0] == '9')
            continue;

        int digit = t[i] - '0';
        if (digit > 9 - digit)
            t[i] = (9 - digit) + '0';
    }
    cout << t << endl;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
