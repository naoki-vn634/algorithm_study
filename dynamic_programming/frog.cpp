#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const long long INF = 1LL << 60;

int main()
{
    int N;
    cin >> N;
    vector<int> height(N);

    for (int i = 0; i < N; i++)
    {
        cin >> height.at(i);
    }

    vector<long long> dp(N, INF);

    dp[0] = 0;
    for (int i = 1; i < N; i++)
    {
        if (i == 1)
            dp[i] = abs(height[1] - height[0]);
        else
            dp[i] = min(dp[i - 1] + abs(height[i] - height[i - 1]), dp[i - 2] + abs(height[i] - height[i - 2]));
    }

    cout << dp[N - 1] << endl;
}