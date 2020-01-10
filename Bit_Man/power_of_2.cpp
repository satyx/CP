#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        bool flag = true;
        int power = 0;
        while(n>0)
        {
            if(n%2!=0 && n!=1)
            {
                flag = false;
                break;
            }
            if(n==1)
                break;
            power++;
            n = n>>1;
        }
        if(flag)
            cout<<power<<endl;
        else
            cout<<-1<<endl;
    }
    return 0;
}