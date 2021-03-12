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

    int n;
    int input;
    std::vector<int> v;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> input;
        v.push_back(input);
    }

    sort(v.begin(), v.end(), greater<int>());
    int total_taxi = 0;
    while (!v.empty() && v[0] == 4)
    {
        v.erase(v.begin());
        ++total_taxi;
    }

    while (!v.empty() && v[0] == 3)
    {
        ++total_taxi;
        v.erase(v.begin());
        if (v.back() == 1)
            v.erase(v.end() - 1);
    }

    int capacity = 0;
    while (!v.empty())
    {
        if (capacity == 0)
            ++total_taxi;

        capacity += v.front();
        v.erase(v.begin());
        if (capacity == 4)
            capacity = 0;
    }
    cout << total_taxi;

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
