#include <bits/stdc++.h>
using namespace std;

int n = 10;
vector<int>cnt[10000005];

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for(int i = 1; i<=n; i++)
    {
        for(int j =i; j<=n; j+=i)
        {
            cnt[j].push_back(i);
        }
    }

    for(int i = 1; i<=n; i++)
    {
        cout<<i<<" no of divisors: "<<cnt[i].size()<<" and divisors are: {";
        for( auto x : cnt[i])
        {
            cout<< x;
            if( x != *(cnt[i].end() -1 ))
            {
                cout<<", ";
            }
        }
        cout<<"}\n";
    }
    

    return 0;
}