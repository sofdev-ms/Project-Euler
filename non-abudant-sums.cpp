// https://www.hackerrank.com/contests/projecteuler/challenges/euler023/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

ll factorsum(ll i)
{
    ll sum = 1;
    for(ll j = 2 ; j* j <= i ; j ++)
    {
        if(i % j == 0)
        {
            sum += j;
            if( i /j != j)
            sum += i / j;
        } 
    }
    return sum;
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector < ll > v;
    for(int i = 12; i <= 28123 ; i++)
    {
        ll sum = factorsum(i);
        if(sum > i)
        v.push_back(i);
    }
    bool check[28124] = {0};
    int size = v.size();
    for(int i = 0 ; i < size ; i ++)
    {
        for(int j = 0 ; j< size; j ++)
        {
            ll sum = v[i] + v[j];
            if(sum <= 28124)
            check[sum] =  true;
        }
    }
    ll t;
    cin >> t;
    while( t--)
    {
        ll n;
        cin >> n;
        if(n > 28123 || check[n])
        cout << "YES" << endl;
        else
        cout << "NO" << endl;
    }
    return 0;
}

