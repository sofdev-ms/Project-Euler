// https://www.hackerrank.com/contests/projecteuler/challenges/euler020/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector < ll > digit;
    digit.push_back(1);
    vector < ll > ans;
    ans.push_back(1);
    ans.push_back(1);

    ll i = 2;
    ll m = 1;
    ll temp = 0;
    
    while( i <= 1000)
    {
        ll sum = 0;
        for(ll j = 0; j < m ; j++)
        {
            ll x = digit[j] * i + temp;
            temp = x / 10;
            digit[j] = x % 10;
            sum += digit[j];
        }
        while(temp > 0)
        {
            digit.push_back(temp %  10);
            sum += (temp % 10);
            temp /= 10;
            m++;
        }
        ans.push_back(sum);
        i++;
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

