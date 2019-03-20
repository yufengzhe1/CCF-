#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int a[30][30];
    int s[30][30]={0};

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    int num=1;
    //找行的
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            while(a[i][j]==a[i][j+1])
            {
                j++;

                if(j==m)
                    break;
                num++;
                if(num>=3)
                    for(int k=j-num+1;k<=j;k++)
                        s[i][k]=1;

            }
            num=1;
        }
    //找列的
    for(int j=0;j<m;j++)
        for(int i=0;i<n;i++)
        {
            while(a[i][j]==a[i+1][j])
            {
                i++;

                if(i==n)
                    break;
                num++;
                if(num>=3)
                    for(int k=i-num+1;k<=i;k++)
                        s[k][j]=1;

            }
            num=1;
        }

    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(s[i][j]==1)
                a[i][j]=0;
        }
     for(int i=0;i<n;i++)
     {
         for(int j=0;j<m;j++)
         {
             cout<<a[i][j]<<" ";
         }
         cout<<endl;
     }
     return 0;

}
