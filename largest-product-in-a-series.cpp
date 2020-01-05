// https://www.hackerrank.com/contests/projecteuler/challenges/euler008/problem

#include<bits/stdc++.h>

using namespace std;

long long int pro(string y)
{
    long long int z=1;
    for(int  i = 0 ; i < y.length() ; i ++)
    {
        z *= (long long int) (y[i] - '0');
    }
    return z;
}



int main(){
    long long int t; 
    long long int i,j,max=0;
    long long int y,p;
    cin >> t;
    for(int a0 = 0; a0 < t; a0++){
        long long int n;
        long long int k;
        cin >> n >> k;
        string ans = "";
        string num;
        cin >> num;
        for(i=0;i<n-k+1;i++)
        {    
            string x = "";
            for(j=0;j<k;j++)
            {
              x=x + num[i + j];     
            }
            p=pro(x);
            
            if(p>max)
            {
              max=p;
              ans = x;
            }
            
   
        }
        cout<<max<<endl;
        
            max=0;
    }
    return 0;
}

