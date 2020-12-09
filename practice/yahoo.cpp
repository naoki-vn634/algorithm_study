#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int N = 6;
    vector<int> sweet(N);
    vector<string> name(N);

    for (int i = 0; i < N; i++)
        cin >> sweet.at(i);
    for (int i = 0; i < N; i++)
        cin >> name.at(i);

    int count = 0;
    for (int i = 0; i < N; i++)
    {
        if (name[i] == "Alice")
            count += sweet[i];
    }
    cout << count << endl;
}