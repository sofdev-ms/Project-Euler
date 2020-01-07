// https://www.hackerrank.com/contests/projecteuler/challenges/euler018/problem

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void find(ll &ans, vector < vector < ll > > &v , ll n , int i , int j ,ll sum)
{
            //cout << i << " " << j << endl;
            sum += v[i][j];
            ans = max(ans , sum);
            if(i + 1 !=n )
            {
                    find(ans , v , n , i + 1 , j , sum);
                    find(ans , v , n , i + 1 ,j + 1, sum);
            }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    ll t;
    cin >> t;
    while( t-- )
    {
        ll n;
        cin >> n;
        int count = 1;
        vector < vector < ll > > v ;
        ll x1 = n;
        while( n-- )
        {
            int i = 0;
            vector < ll > temp;
            while( i < count)
            {
                ll x;
                cin >> x;
                temp.push_back(x);
                i++;
            }
            v.push_back(temp);
            count ++;
        }
        ll ans = 0;
        find(ans , v , x1 , 0, 0 , 0);
        cout << ans << endl;
    }
    return 0;
}

