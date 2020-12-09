#include <bits/stdc++.h>
using namespace std;

int main()
{
    int left = 20, right = 36;

    while (right - left > 1)
    {
        int mid = left + (right - left) / 2;
        cout << "Is the age less than " << mid << "(yes/no)" << endl;
    }
}