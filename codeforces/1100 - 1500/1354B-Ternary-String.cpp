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
    std::string s;
    while (t--)
    {
        cin >> s;
        int min_length = 200001;
        int a[4] = { 0 };
        for (int i = 0; i < s.size(); ++i)
        {
            a[s[i]-'0'] = i+1;
            if (a[1] && a[2] && a[3])
            {
                int min = std::min({a[1], a[2], a[3]});
                int max = std::max({a[1], a[2], a[3]});
                int length = max - min + 1;
                if (length < min_length)
                    min_length = length;
            }
        }
        cout << (min_length==200001?0:min_length) << std::endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
