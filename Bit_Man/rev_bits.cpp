#include<bits/stdc++.h>
using namespace std;

int rev_bits(int n)
{
    int res = 0;
    while(n)
    {
        res<<=1;
        res |= n&1;
        n >>= 1;
    }
    return res; 
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<rev_bits(n)<<endl;
    }
}