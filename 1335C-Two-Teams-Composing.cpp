#include <bits/stdc++.h>

using namespace std;

void test_case(int n) {
    std::vector<int> v;
    int input;
    for (int i = 0; i < n; ++i) {
        cin >> input;
        v.push_back(input);
    }

    int arr[200001] = { 0 };
    for (int i = 0; i < v.size(); ++i) ++arr[v[i]];

    int same = *max_element(arr, arr + n + 1);
    int different = n - count(arr, arr + n + 1, 0);

    if (same > different + 1)
        cout << different + 1 << endl;
    else
        cout << min(same, different) << endl;
}

int main() {
    // turn off buffer sync between c and c++ streams. Decouple cin and cout
    ios_base::sync_with_stdio(false);cin.tie(NULL);

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    freopen("error.txt", "w", stderr);
    #endif

    int t, n;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        cin >> n;
        test_case(n);
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
