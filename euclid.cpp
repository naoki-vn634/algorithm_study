#include <bits/stdc++.h>
using namespace std;

int euclid(int n, int m)
{
    int r, tmp;
    r = n % m;
    if (r == 0)
        return m;

    return euclid(m, r);
}

int main()
{
    int N, M, ans;
    cin >> N >> M;
    ans = euclid(N, M);

    cout << ans << endl;
}
