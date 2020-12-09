#include <bits/stdc++.h>
using namespace std;

int tribo(int N, vector<int> &a)
{
    if ((N == 0) || (N == 1))
    {
        cout << "N=0,1" << endl;
        return 0;
    }
    else if (N == 2)
    {
        cout << "N=2" << endl;
        return 1;
    }

    else if (a[N] != -1)
    {
        cout << a[N] << endl;
        cout << "N = -1以外" << endl;
        return a[N];
    }

    else
    {
        cout << "それ以外" << endl;
        return a[N] = tribo(N - 1, a) + tribo(N - 2, a) + tribo(N - 3, a);
    }
}

int main()
{
    int N;
    vector<int> a(N, -1);

    cin >> N;
    cout << N << endl;
    for (int i = 0; i < N; i++)
    {
        cout << a.at(i);
    }
    cout << tribo(N, a) << endl;

    cout << a[N] << endl;
}