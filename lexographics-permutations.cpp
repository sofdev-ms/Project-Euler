#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    ll t;
    cin >> t;
    ll v = 1;
    for(ll i = 1; i <=12 ; i++)
    v *= i;
    while( t-- )
    {
        string s= "abcdefghijklm";
        bool visited[13] = {0};
        string ans = "";
        ll n;
        cin >> n;
        n--;
        ll temp = v;
        ll k = 12;
        for(int i = 0 ; i< 13 ; i ++)
        {
            ll z = n / temp;
            int count = 0;
            int j = 0;
            while(count <= z && j < 13)
            {
                if(!visited[j])
                {
                    if(count == z)
                    {
                        visited[j] = true;
                        break;
                    }
                    count ++;

                }
                j++;
            }
            ans += s[j];
            n -= (n / temp) * temp;
            if( k != 0)
            temp = temp / k;
            k--; 
        }
        cout << ans << endl;
    } 
    return 0;
}

