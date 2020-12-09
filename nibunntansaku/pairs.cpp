#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
using namespace std;

const int INF = 20000000;

int main()
{
    int N, K;
    cin >> N >> K;
    cout << "N: " << N << endl;
    cout << "K: " << K << endl;
    vector<int> a(N), b(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < N; i++)
        cin >> b[i];

    int min_value = INF;
    sort(b.begin(), b.end());

    for (int i = 0; i < N; i++)
    {
        auto iter = lower_bound(b.begin(), b.end(), K - a[i]);
        int value = *iter;
        cout << "a[i]: " << a[i] << endl;
        cout << "value: " << value << endl;

        if (a[i] + value < min_value)
        {
            min_value = a[i] + value;
            cout << min_value << endl;
        }
    }
    cout << min_value << endl;
}