https://www.hackerrank.com/contests/projecteuler/challenges/euler005/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while( t-- )
    {
        ll prime[40];
        for(int i = 0 ;i <40; i++)
        prime[i] = 0;
        ll  n;
        cin >> n;
        ll ans = 1;
        ll x;
        for(ll i = 2; i <= n ; i ++)
        {
            ll c = 0;
            x = i;
            while( x % 2 == 0)
            {
                x /= 2;
                c++;
            }
            prime[2] = max(prime[2] , c);
            if(x != 1)
            {
                for(ll j = 3 ; j * j <= x; j +=2)
                {
                    c = 0;
                    while( x % j == 0)
                    {
                        x /= j;
                        c++;
                    }
                    prime[j] = max(prime[j] , c);
                }
                if( x != 1)
                {
                    prime[x] = max(prime[x] ,(ll)1);
                }
            }
        }
        for(ll i = 2 ; i < 40 ; i ++)
        {
            ans *= pow( i ,prime[i]);
        }
        cout << ans << endl;

    }
}
