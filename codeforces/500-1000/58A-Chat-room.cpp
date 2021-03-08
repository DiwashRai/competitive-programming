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

    string str;
    cin >> str;
    string hello = "hello";
    int index = 0;

    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == hello[index])
            ++index;

        if (index >= 5)
            break;
    }

    if (index >= 5)
        cout << "YES";
    else
        cout << "NO";


    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
