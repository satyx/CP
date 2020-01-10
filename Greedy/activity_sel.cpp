#include<bits/stdc++.h>
using namespace std;

struct act
{
    int a;
    int b;
};

bool comp(act a1,act a2)
{
    return a1.b<a2.b;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int n;
        cin>>n;
        act arr[n];
        for (int i = 0; i < n; ++i)
        {
            int s,e;
            cin>>s>>e;
            arr[i].a = s;
            arr[i].b = e;
        }
        sort(arr,arr+n,comp);
        int count = 1;
        int job_end = arr[0].b;
        for (int i = 1; i < n; ++i)
        {
            if(arr[i].a<=job_end)
            {
                count++;
                job_end = arr[i].b;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}