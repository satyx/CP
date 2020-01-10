#include<bits/stdc++.h>
using namespace std;

bool check(int arr[9][9],int x,int y, int z)
{
    int row = (x/3)*3;
    int col = (y/3)*3;
    for (int i = 0; i < 9; ++i)
    {
        if(arr[x][i]==z || arr[i][y]==z)
            return false;
    }
    for(int i=0;i<3;i++)
    {
        for (int j = 0; j < 3; ++j)
        {
            if(arr[row+i][col+j]==z)
                return false;
        }
    }
    return true;
}

bool findunfilled(int arr[9][9],int &row, int &col )
{
    for (row = 0; row < 9; ++row)
    {
        for (col = 0; col < 9; ++col)
        {
            if(arr[row][col]==0)
                return true;
        }
    }
    return false;
}

void display(int arr[9][9])
{
    for (int i = 0; i < 9; ++i)
            {
                for (int j = 0; j < 9; ++j)
                {
                    cout<<arr[i][j]<<" ";
                }
                cout<<endl;
            }
}


bool solve(int arr[9][9])
{
    int row,col;
    if(!findunfilled(arr,row,col))
        return true;

    for (int i = 1; i <= 9; ++i)
    {
        if(check(arr,row,col,i))
        {
            arr[row][col] = i;
            if(solve(arr))
                return true;
            arr[row][col] = 0;
        }
    }
    return false;
}




int main()
{
    int t;
    cin>>t;
    while(t-->0)
    {
        int arr[9][9];
        for (int i = 0; i < 9; ++i)
        {
            for (int j = 0; j < 9; ++j)
            {
                scanf("%d",&arr[i][j]);
            }
        }
        if(solve(arr))
        {
            display(arr);
        }
    }
    return 0;
}