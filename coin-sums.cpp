//https://www.hackerrank.com/contests/projecteuler/challenges/euler031/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ll dp[9][100001];
    ll value[9] = {0, 1 , 2 , 5 , 10 , 20 , 50 , 100 ,200};
    for(ll i = 0; i <=100000; i++)
    dp[0][i] = 0;

    for(ll i = 0 ; i < 9; i ++)
    dp[i][0] = 1;

    for(ll i = 1 ; i <=8; i++)
    {
        for( ll j = 1; j<= 100000; j ++)
        {
                if(j < value[i])
                {
                    dp[i][j] = dp[i - 1][j] % mod;
                }
                else
                {
                    dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - value[i]] % mod)%mod;
                }
        }
    }  
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        cout << dp[8][n] << endl;
    }
    return 0;
}

