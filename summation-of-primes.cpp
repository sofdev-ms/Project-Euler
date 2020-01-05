// https://www.hackerrank.com/contests/projecteuler/challenges/euler010/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    bool prime[2000001] = {0};
    prime[0] = 1;
    prime[1] = 0;
    for(int i = 2; i*i <= 2000000; i++ )
    {
        if(!prime[i])
        {
            for(int j = i * i ; j < 2000001 ; j+= i)
            {
                prime[j] = true;
            }
        }
    }
    vector < ll > p;
    vector < ll > sum;
    ll present = 0;
    for(ll i =2 ; i <= 2000000 ; i ++)
    {
        if(!prime[i])
        {
            p.push_back(i);
            sum.push_back(present + i);
            present += i;
        }
    }
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        int pos = lower_bound(p.begin() , p.end() , n) - p.begin();
        if(pos == p.size())
        {
            pos --;
        }
        else if(p[pos] > n)
        {
            pos --;
        }
        
        if(pos <  0)
        cout << "0" <<endl;
        else
        cout << sum[pos] << endl;

    }
}


