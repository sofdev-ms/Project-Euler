// https://www.hackerrank.com/contests/projecteuler/challenges/euler021/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

ll factorsum(ll n)
{
    ll sum = 1;
    for(int i = 2; i *i <= n ; i++)
    {
        if(n % i == 0)
        {
            sum += i;
            if( n/ i != i)
            sum += n / i;
        }
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ll sum[100001];
    sum[0] = 0;
    for(ll i = 1; i <= 100000; i++)
    {
        sum[i] = factorsum(i);
    }
    ll check[100001] = {0};
    for(ll i = 1 ; i <= 100000 ; i ++)
    {
        ll x = sum[i];
        if(x <= 100000 && x!=i)
        {
            if(sum[x] == i)
            {
                //cout << i << " " << x << endl;
                check[i] = i;
                check[x] = x;
            }
        }
        else if( x > 100000)
        {
            ll z = factorsum(x);
            if(z == i)
            check[i] = x;
        }

    }
    for(int i = 1; i <= 100000; i++)
    {
        check[i] += check[i - 1];
    }
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        cout << check[n - 1] << endl;
    }
    return 0;
}

