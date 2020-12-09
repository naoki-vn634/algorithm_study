#include <bits/stdc++.h>
using namespace std;

vector<long long> memo(50, -1);

long long fibo(int N)
{
    if (N == 0)
        return 0;
    else if (N == 1)
        return 1;

    if (memo[N] != -1)
        return memo[N];
    return memo[N] = fibo(N - 1) + fibo(N - 2);
}

int main()
{
    fibo(49);

    for (int i = 0; i < memo.size(); i++)
    {
        cout << memo[i] << endl;
    }
}