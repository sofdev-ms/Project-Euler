// https://www.hackerrank.com/contests/projecteuler/challenges/euler015/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int
#define mod 1000000007

int main()
{
    ll t;
    cin >>t ;
    while( t--)
    {
        ll n , m;
        cin >> n >> m;
        ll dp[n + 1][m + 1];

        for(int i = 0 ;i <=n ; i ++)
        dp[i][0] = 1;
        for(int i = 0; i <= m ; i ++)
        dp[0][i] = 1;

        for(int i = 1; i <= n ; i++)
        {
            for(int j = 1; j <=m ; j ++)
            {
                dp[i][j] = (dp[i - 1][j] % mod + dp[i][j - 1] % mod ) % mod;
            }
        }
        cout << dp[n][m] % mod <<endl;
    }
}
