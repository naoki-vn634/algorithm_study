#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const long long INF = 1LL << 60;
int N;
vector<long long> dp;
vector<int> height;

template <typename T>
void chmin(T &a, T b)
{
    if (a > b)
        a = b;
}

long long rec(int i)
{
    if (dp[i] < INF)
        return dp[i];
    else if (i == 0)
        return 0;
    long long res = INF;

    chmin(res, rec(i - 1) + abs(height[i] - height[i - 1]));
    if (i > 1)
    {
        chmin(res, rec(i - 2) + abs(height[i] - height[i - 2]));
    }
    return dp[i] = res;
}

int main()
{

    cin >> N;
    height.resize(N);

    for (int i = 0; i < N; i++)
    {
        cin >> height.at(i);
    }
    dp.assign(N, INF);
    cout << rec(N - 1) << endl;
}