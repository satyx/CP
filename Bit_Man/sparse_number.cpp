#include<bits/stdc++.h>
using namespace std;
bool is_sparse(int n)
{
    if(n==1 || n==0)
        return true;

    int prev = n & 1;
    int curr;
    n >>=1;
    while(n>0)
    {
        curr = n&1;
        if(prev&curr)
            return false;
        prev = curr;
        n >>=1;
    }
    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        if(is_sparse(n))
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
    return 0;
}