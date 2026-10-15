#include <bits/stdc++.h>
using namespace std;

int cnt[100005];
int n = 10;

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

    vector <int> primes;
    cout<<"primes number are: ";
    for(int i = 2; i<=n; i++)
    {
        if(cnt[i] == 2)
        {
            primes.push_back(i);
        }
    }

    for(int i = 0; i<primes.size(); i++)
    {
        cout<<primes[i];

        if(primes[i] != *(primes.end()-1))
        {
            cout<<", ";
        }
    }

    return 0;
}