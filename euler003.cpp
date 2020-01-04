// https://www.hackerrank.com/contests/projecteuler/challenges/euler003/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = -1;
        while( n  % 2 == 0)
        {
            ans = 2;
            n /= 2;
        }
        if( n == 1)
        cout << ans << endl;
        else
        {
            for(ll i = 3 ; i * i <= n ; i +=2 )
            {
                while( n % i == 0)
                {
                    ans = i;
                    n /= i;
                }
            }
            if( n == 1)
            cout << ans << endl;
            else
            cout << n << endl;
        }
    }
}

