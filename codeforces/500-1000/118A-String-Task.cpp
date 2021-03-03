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

    string vowels = "aeiouyAEIOUY";
    string str;
    cin >> str;

    for (int i = 0; i < vowels.length(); ++i)
        str.erase(remove(str.begin(), str.end(), vowels[i]), str.end());

    string output = "";
    for (int i = 0; i < str.length(); ++i)
        output = output + '.' + tolower(str[i], locale());

    cout << output;


    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
