#include<bits/stdc++.h>
using namespace std;

void swap(int &num,int p1,int p2,int n)
{
    int set1 = (num>>p1) & ((1U<<n)-1);
    int set2 = (num>>p2) & ((1U<<n)-1);

    int set = set1 ^ set2;

    set = (set<<p1)| (set<<p2);
    num = num ^ set;
}

int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int num,p1,p2,n;
        cin>>num>>p1>>p2>>n;
        swap(num,p1,p2,n);
        cout<<num<<endl;
    }
    return 0;
}