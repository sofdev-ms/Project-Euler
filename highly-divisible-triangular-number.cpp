// https://www.hackerrank.com/contests/projecteuler/challenges/euler012/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    ll a[1001] = {0};
    a[0] = 1;
    ll i = 1;
    ll n = 2;
    while( i < 1001)
    {
        ll x = n * (n + 1) / 2;
        ll x1 = x;
        ll pro = 1;
        for(int  j = 2 ; j * j <= x ; j ++)
        {
            int count = 1;
            while(x % j == 0)
            {
                x/=j;
                count ++;
            }
            pro *= (count);
        }
        if( x > 1) pro *= 2;
        n ++;

        while(i < 1001 && i  < pro)
        {
            a[i] = x1;
            i++;
        }
    } 

    ll t;
    cin >> t;
    while( t-- )
    {
        ll x;
        cin >> x;
        cout << a[x] << endl;
    }
}
