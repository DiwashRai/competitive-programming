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

    while (t--)
    {
        int n, e;
        cin >> n;
        std::vector<int> v;
        while (n--)
        {
            cin >> e;
            v.push_back(e);
        }

        int groups = 0, count = 0;
        std::sort(v.begin(), v.end());
        for (int i = 0; i < v.size(); ++i)
        {
            ++count;
            if (v[i] == 1)
            {
                ++groups;
                count = 0;
            }
            else if (v[i] <= count)
            {
                ++groups;
                count = 0;
            }
        }
        cout << groups << std::endl;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
