// https://www.hackerrank.com/contests/projecteuler/challenges/euler013/

#include<bits/stdc++.h>

using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    string a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k=59;
    int x[60];
     
    int sum=0;
    
    for(int j=49;j>=0;j--)
    {
        for(int i=0;i<n;i++)
        {
            sum=sum+a[i][j]-48;
        }
    
        x[k]=sum%10;
        k--;
        sum=sum/10;

    }
    while(sum>0)
    {
        x[k]=sum%10;
        k--;
        sum=sum/10;
    }
    
    
    for(int i=k+1;i<k+11;i++)
    {
        cout<<x[i];
    }
    
  
    
    return 0;
}

