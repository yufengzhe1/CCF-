#include <iostream>

using namespace std;

int flag[101][101]={0};

int main()
{
    int n;
    cin>>n;
    int **a=new int *[n];
    for(int i=0;i<n;i++)
    {
        a[i]=new int[4];
        for(int j=0;j<4;j++)
            cin>>a[i][j];
    }
    for(int k=0;k<n;k++)
    {
        for(int i=a[k][0];i<a[k][2];i++)
        {
            for(int j=a[k][1];j<a[k][3];j++)
                flag[i][j]=1;
        }
    }
    int num=0;
    for(int i=0;i<101;i++)
        for(int j=0;j<101;j++)
            if(flag[i][j]==1)
                num++;
    cout<<num;
    return 0;
}
