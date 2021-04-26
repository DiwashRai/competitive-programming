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

    int t, n, x, a, odd, even;
    cin >> t;
    while (t--)
    {
        odd = 0;
        even = 0;
        cin >> n >> x;
        while (n--)
        {
            cin >> a;
            if (a % 2 == 1)
                ++odd;
            else
                ++even;
        }
        if (odd == 0)
        {
            cout << "NO" << std::endl;
            continue;
        }

        --odd;
        --x;
        while (x > 1 && odd > 1)
        {
            x = x - 2;
            odd = odd - 2;
        }
        while (x > 0 && even > 0)
        {
            --even;
            --x;
        }
        if (x == 0)
            cout << "YES" << std::endl;
        else
            cout << "NO" << std::endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
