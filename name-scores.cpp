// https://www.hackerrank.com/contests/projecteuler/challenges/euler022/
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ll n;
    cin >> n;
    vector <string > v;
    for(int i = 0 ; i< n ; i++)
    {
        string s;
        cin >> s;
        v.push_back(s);
    } 
    sort(v.begin() , v.end());
    map < string , ll > m;
    for(int i = 0 ; i< n ; i ++)
    {
        ll sum = 0;
        ll l = v[i].length();
        sum += l;
        for(ll j = 0 ; j < l ; j++)
        {
            sum += (ll) (v[i][j] - 'A');
        }
        sum *= ( i + 1);
        m[v[i]] = sum;
    }
    ll q;
    cin >> q;
    while(q--)
    {
        string s;
        cin >> s;
        cout << m[s] <<endl;
    }
    return 0;
}

