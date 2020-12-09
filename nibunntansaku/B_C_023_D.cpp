#include <bits/stdc++.h>
#include <iostream>
using namespace std;

const int INF = 20000000;

int main()
{
    int N;
    cin >> N;
    vector<int> height(N);
    vector<int> up(N);

    for (int i = 0; i < N; i++)
        cin >> height[i] >> up[i];

    int left = 0, right = INF;
    while ((right - left) > 1)
    {
        int mid = left + (right - left) / 2;
        bool ok = true;
        vector<long long> t(N, 0);
        for (int i = 0; i < N; i++)
        {
            if (mid < height[i])
                ok = false;
            else
            {
                t[i] = (mid - height[i]) / up[i];
            }
        }
        sort(t.begin(), t.end());
        for (int i = 0; i < N; i++)
        {
            if (t[i] < i)
                ok = false;
        }
        if (ok)
            right = mid;
        else
            left = mid;
    }
    cout << right << endl;
}