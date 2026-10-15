#include <bits/stdc++.h>
using namespace std;

int n = 10;
int cnt[100005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 1; i<=n; i++)
    {
        for(int j = i; j<=n; j+=i)
        {
            cnt[j]++;
        }
    }

    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" total divisors is: "<<cnt[i]<<"\n";
    }

    return 0;
}