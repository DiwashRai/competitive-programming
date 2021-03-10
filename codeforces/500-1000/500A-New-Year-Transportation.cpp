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

    int n, t;
    cin >> n >> t;

    vector<int> v;
    for (int i = 0; i < n - 1; ++i)
    {
        int input;
        cin >> input;
        v.push_back(input);
    }

    int cell = 0;
    while (cell < t - 1)
    {
        cell = cell + v[cell];
        if (cell == t - 1)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
