// https://www.hackerrank.com/contests/projecteuler/challenges/euler004/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    vector < ll > num;
    for(int i = 100 ; i < 1000; i ++)
    {
        for(int j = 100 ; j < 1000 ; j ++)
        {
            ll m = i * j;
            string x = to_string(m);
            string y = x;
            reverse(x.begin(), x.end());
            if( y == x)
            {
                num.push_back(m);
            }
        }
    }
    sort(num.begin() , num.end());
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        cout << num[lower_bound(num.begin() , num.end() , n) - num.begin() - 1] << endl;
    }
}
