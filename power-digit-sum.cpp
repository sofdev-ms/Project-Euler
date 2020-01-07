// https://www.hackerrank.com/contests/projecteuler/challenges/euler016/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        vector < ll > v;
        v.push_back(1);
        ll m = 1;
        ll temp = 0;
        while( n-- )
        {
            for(int i = 0 ; i < m ; i++)
            {
                ll x = v[i] * 2 + temp;
                temp = x / 10;
                v[i] = x %  10;
            }
            while(temp > 0)
            {
                v.push_back(temp %  10);
                temp /= 10;
                m++;
            }
        }
        ll ans = 0;
        for(int i = 0 ; i < m ; i ++)
        ans += v[i];

        cout << ans << endl;
    }
}
