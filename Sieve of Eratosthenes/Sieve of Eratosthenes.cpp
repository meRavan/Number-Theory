#include <bits/stdc++.h>
using namespace std;

const int lim = 100;
bitset<lim> isPrime; 


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    isPrime[2] = 1;
    for(int i = 3; i<=lim; i+=2)
    {
        isPrime[i] = 1;
    }

    int sq = sqrt(lim) + 2;

    for(int i = 3; i<=sq; i+=2)
    {
        for(int j = i*i; j<=lim; j+=(i+i))
        {
            isPrime[j] = 0;
        }
    }

    for(int i = 1; i<=lim; i++)
    {
        if(isPrime[i] == 1)
        {
            cout<<i<<"  ";
        }
    }

    return 0;
}