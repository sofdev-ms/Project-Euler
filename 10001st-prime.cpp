//https://www.hackerrank.com/contests/projecteuler/challenges/euler007/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int prime[2000001] = {0};
    prime[0] = 1;
    prime[1] = 1;
    vector < ll > ans;
    for(int i = 2 ; i * i < 2000001; i++)
    {
        if(!prime[i])
        {
            for(int j = i*i; j < 2000001 ; j+= i)
            {
                prime[j]  =1;
            }
        }
    }
    for(int i = 2; i < 1000001;i++)
    {
        if(!prime[i])
        ans.push_back(i);
    }
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        cout << ans[n - 1] << endl;
    }
}
