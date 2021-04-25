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

    long long t, n, a, b;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cin >> a;
        long long sum = 0;
        --n;
        while (n--)
        {
            cin >> b;
            if (a*b > 0)
            {
                if (b > a)
                    a = b;
            }
            else
            {
                sum += a;
                a = b;
            }
        }
        cout << sum + a << std::endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}

