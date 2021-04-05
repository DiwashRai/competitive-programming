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

    int n, m, a, b;
    cin >> n >> m >> a >> b;

    double m_price = b / (double)m;

    if (a <= m_price)
    {
        cout << n * a;
    }
    else
    {
        int m_tickets = n / m;
        int n_tickets = n - (m_tickets * m);
        int mix = n_tickets * a + m_tickets * b;
        if (mix < (m_tickets + 1) * b)
            cout << mix;
        else
            cout << (m_tickets + 1) * b;
    }

    cerr << "time taken: " << (float)clock()/CLOCKS_PER_SEC << " secs" << endl;
    return 0;
}
