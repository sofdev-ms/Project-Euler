// https://www.hackerrank.com/contests/projecteuler/challenges/euler014/

#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
ll a[5000001] = {0};
ll fun(ll x)
{
    if(a[x] != 0)
    return a[x];
    
    if( x % 2 == 0)
    a[x] = 1 + fun(x / 2);
    else
    {
        ll temp = 3 * x + 1;
        ll count = 1;
        while(temp > 5000000)
        {
            if(temp % 2 == 0)
            temp /= 2;
            else
            temp = 3 * temp + 1;

            count ++;

        } 
        a[x] = count + fun(temp);
    }

    return a[x];


}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    ll x = 0;
    ll no = 1;
    a[1] = 1;
    for(int i = 2; i < 5000001; i++)
    a[i] = fun(i);
    for(int i = 2; i < 5000001 ; i++)
    {
        
        if(a[i] >= x)
        {
            x = a[i];
            a[i] = i;
            no = i;
        }
        else
        {
            a[i] = no;
        }
    }
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        cout << a[n] << endl;
    }
    return 0;
}

