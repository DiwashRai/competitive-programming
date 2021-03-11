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

    for (int i = 0; i < t; ++i)
    {
        unsigned long long int n, k;
        cin >> n >> k;
        if (k < n)
        {
            //ceiling int division
            int a = 1 + ((n - 1) / k);
            k *= a;
        }

        //ceiling int division
        cout << 1 + ((k - 1) / n) << endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
