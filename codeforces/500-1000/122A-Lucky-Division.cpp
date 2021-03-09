#include <bits/stdc++.h>

using namespace std;

bool isLucky(int x) {
    string str = to_string(x);
    for (int i = 0; i < str.length(); ++i)
    {
        if (str[i] == '4' || str[i] == '7')
            continue;
        else
            return false;
    }
    return true;
}

int main() {
    // turn off buffer sync between c and c++ streams. Decouple cin and cout
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int n;
    cin >> n;

    if (isLucky(n))
    {
        cout << "YES";
        return 0;
    }

    for (int i = 0; i <= (n + 1)/2; ++i)
    {
        cerr << i;
        if (isLucky(i))
        {
            if (n % i == 0)
            {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}
