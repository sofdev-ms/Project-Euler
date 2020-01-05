//https://www.hackerrank.com/contests/projecteuler/challenges/euler006/problem

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

        ll ans = n *( n + 1) / 2;
        ans = ans * ans;
        ans -= n * (n + 1) * (2*n + 1)/6;
        cout << ans << endl; 
    }
}
