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

    string line;
    cin >> line;

    for (auto ch : line)
    {
        if (ch == 'H')
        {
            cout << "YES";
            return 0;
        }
        else if(ch == 'Q')
        {
            cout << "YES";
            return 0;
        }
        else if(ch == '9')
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
