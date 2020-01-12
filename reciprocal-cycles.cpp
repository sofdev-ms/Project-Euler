// https://www.hackerrank.com/contests/projecteuler/challenges/euler026/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll fun(ll x)
{
    ll count = 1;
    ll check[x] = {0};
    check[1] = count++;
    ll i = 1;
    while( i < x)
    {
        i *= 10;
    }
    i = i % x;
    //cout << i << endl;
    while(i!=0 && check[i] == 0)
    {
        //cout << i << endl;
        check[i] = count ++;
        while( i < x)
        {
            i *= 10;
        }
        i = i % x;
    }
    return count - check[i];
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    bool prime[10001] = {0};
    prime[0] = true;
    prime[1] = true;
    for(ll i= 2; i* i<=10000 ;i ++)
    {
        if(!prime[i])
        {
            for(ll j = i * i; j<=10000; j +=i)
            prime[j] = true;
        }
    }
    ll ans[10001];
    ll mx =  1;
    ll p = 3;
    ans[4] = 3;
    // cout << fun(7) << endl;

    for(ll i = 5; i<=10000; i++)
    {
        ans[i] = p;
        if(!prime[i])
        {
            ll value = fun(i); 
            if(value > mx)
            {
                mx = value;
                p = i;
            }

        }
    
        
    }
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        cout << ans[n] << endl;
    }
    return 0;
}

