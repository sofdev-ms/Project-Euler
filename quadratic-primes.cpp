// https://www.hackerrank.com/contests/projecteuler/challenges/euler027/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ll N;
    cin >>N;
    ll prime[1000001] = {0};
    prime[0] = true;
    prime[1] = true;
    for(ll i = 2; i* i <= 1000000;i++)
    {
        if(!prime[i])
        {
            for(ll j= i * i ; j <= 1000000; j+=i)
            prime[j] = true;
        }
    }
    ll t;
    ll ans = 0;
    ll temp , temp1;
    
    for( ll j = N; j >=2 ; j--)
    {
        if(!prime[j])
        {
            t = j;
            for(ll i = -t ; i <= t ; i ++)
            {
                ll y = t;
                ll n = 1;
                ll count = 0;
                while(!prime[abs(y)])
                {
                    // cout << y << endl;
                    count ++;
                    y = n * n + i* n + t;
                    n++;
                } 
                // if( i == 1)
                // cout << i << " " << count << endl;
                if(count > ans)
                {
                    ans = count;
                    temp = i ; 
                    temp1 = t;     
                }
            }
            //cout << ans << " " << j <<endl;
        }
    }
    
    cout << temp << " " << temp1 << endl;
    return 0;

}

