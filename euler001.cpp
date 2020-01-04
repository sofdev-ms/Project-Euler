// https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem

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
        ll n3 = n/3;
        if( n % 3 == 0)
        n3 --;
        ll n5 = n / 5;
        if( n % 5 == 0)
        n5 --;
        ll n15 = n / 15;
        if( n % 15 == 0)
        n15 --;

        ll ans = 0;
        ans += 3 * n3 * ( 1 + n3) / 2;
        ans += 5 * n5 * ( 1 + n5) / 2;
        ans -= 15 * n15 * (1 + n15) / 2;

        cout << ans << endl;
    }
}

