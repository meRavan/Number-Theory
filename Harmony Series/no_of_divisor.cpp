#include <bits/stdc++.h>
using namespace std;

int n = 10;
int NoD[100005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 1; i<=n; i++)
    {
        for(int j = i; j<=n; j+=i)
        {
            NoD[j]++;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" num of divisors: "<<NoD[i]<<"\n";
    }

    return 0;
}