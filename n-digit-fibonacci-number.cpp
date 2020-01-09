//https://www.hackerrank.com/contests/projecteuler/challenges/euler025/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    vector < int > x(5001 , 0);
    vector < int > y(5001 , 0);
    vector < int > z(5001 , 0);
    x[0] = 1;
    y[0] = 1; 
    int m2 = 1;
    vector < int > ans(5001);
    ans[1] = 1;
    int count = 2;
    while( m2 < 5000)
    {
        int temp = 0;
        for(int i = 0; i < m2 ; i++)
        {
            int x1 = x[i] + y[i] + temp;
            z[i] = x1 % 10;
            temp = x1 / 10;
        }
        int f = 1;
        while(temp > 0)
        {
            f = 0;
            z[m2] = temp % 10;
            temp /=10;
            m2 ++; 
        }
        count ++;
        if(!f)
        {
            ans[m2] = count;
        }
        x = y;
        y = z;

    }    
    //cout << ans[1000] << endl;
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

