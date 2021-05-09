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
        switch (digit) {
            case 5:
                t[i] = '4';
                break;
            case 6:
                t[i] = '3';
                break;
            case 7:
                t[i] = '2';
                break;
            case 8:
                t[i] = '1';
                break;
            case 9:
                t[i] = '0';
                break;
        }
    }
    cout << t << endl;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}