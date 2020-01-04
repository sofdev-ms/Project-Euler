https://www.hackerrank.com/contests/projecteuler/challenges/euler002/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main ()
{
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        ll x = 1;
        ll y = 1;
        while( y < n)
        {
            long long int temp = y;
            y = x + y;
            x = temp;
            if(y < n && y % 2 == 0)
            ans += y;
        }
        cout << ans << endl;
    }
}

