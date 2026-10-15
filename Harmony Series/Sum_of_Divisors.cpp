#include <bits/stdc++.h>
using namespace std;

int n = 10;
int SoD[100005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 1; i<=n; i++)
    {
        for(int j = i; j<=n; j+=i)
        {
            SoD[j]+=i;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" sum of divisors: "<<SoD[i]<<"\n";
    }

    return 0;
}