#include <bits/stdc++.h>
using namespace std;

int binary_search(int key, vector<long long> &a)
{
    int left = 0;
    int right = a.size() - 1;
    int mid = left + (right - left) / 2;
    while (right >= left)
    {
        if (key == a[mid])
            return mid;
        else if (key > a[mid])
        {
            left = mid + 1;
        }
        else if (key < a[mid])
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int N, key;
    cin >> N >> key;
    // cout << "N: " << N << endl;
    // cout << "Key: " << key << endl;
    vector<long long> a(N);
    for (int i = 0; i < N; i++)
        cin >> a.at(i);

    cout << binary_search(key, a) << endl;
}