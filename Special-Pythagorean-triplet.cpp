// https://www.hackerrank.com/contests/projecteuler/challenges/euler009/problem

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

        for(ll b = 2; b <n ; b++)
        {
            ll c = (n - b) * (n - b) + b * b;
            if( c % (2* n - 2 * b) == 0)
            {
                c /= (2* n - 2 * b);
            }
            ll a = n - (b + c);
            if( b > a && c > b)
            {
                ans = max(ans , a*b*c);
            }
        }
        cout << ans << endl;
    }


    
}

