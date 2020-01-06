// https://www.hackerrank.com/contests/projecteuler/challenges/euler011/problem

#include<bits/stdc++.h>

using namespace std;
#define ll long long int

int main()
{
    int grid[20][20];
    for(int i = 0 ; i< 20 ; i ++)
    {
        for(int j = 0 ; j < 20; j++)
        cin >> grid[i][j];
    }
    int ans ;
    int mx = 0;
    for(int i = 0; i < 20 ; i ++)
    {
        for(int j = 0 ; j < 20 ; j ++ )
        {
            int p[4] = { 1 , 1, 1 , 1};
            int k = 0;
            while( k<= 3)
            {
                if( i < 17)
                {
                    p[0] *= grid[i + k][j];
                }
                if( j < 17)
                {
                    p[1] *= grid[i][j + k];
                }
                if(j < 17 && i < 17)
                {
                    p[2] *= grid[i + k][j + k];
                }
                if( i < 17 && j > 2)
                p[3] *= grid[ i + k][j - k];

                k++;
            }
            sort(p , p + 4);
            ans = max(ans , p[3]);
        }
    }
    cout << ans << endl;
}
