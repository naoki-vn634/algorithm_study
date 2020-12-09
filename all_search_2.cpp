#include <bits/stdc++.h>
#include <typeinfo>
using namespace std;

int main()
{
    int N;
    string S;
    cin >> S;
    N = S.size();

    int res;
    for (int bit = 0; bit < (1 << (N - 1)); bit++)
    {
        int tmp = 0;
        for (int i = 0; i < N - 1; i++)
        {
            tmp *= 10;
            tmp += S[i] - '0';

            if (bit & 1 << i)
            {
                res += tmp;
                tmp = 0;
            }
        }
        tmp *= 10;
        tmp += S.back() - '0';
        res += tmp;
    }
    cout << res << endl;
}
