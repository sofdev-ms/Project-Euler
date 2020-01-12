// https://www.hackerrank.com/contests/projecteuler/challenges/euler028/problem

#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define ll long long int


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        ll sum = 1;
        ll term = n / 2;
        ll x = ((term  % mod ) * ( term + 1)) %mod;
        x = (x * (ll)10) % mod;
        ll z = 2 * term - 1;
        ll z1 = 2 * term + 1;
        if(term % 3 == 0)
        term /=3;
        else if( z % 3 == 0 )
        z/=3;
        else
        z1/=3;
        ll y = ((((term % mod) * z ) % mod) * z1) % mod;
        y = (y * (ll)4) % mod;
        sum = sum + x + y;
        cout << sum % mod << endl;
        // cout << sum << endl;
    }   
    return 0;
}

