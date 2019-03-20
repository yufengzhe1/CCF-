#include <iostream>
#include <vector>
#include <utility>

using namespace std;
int a[501][501];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        cin>>a[i][j];

    cout<<a[0][0]<<" ";

    for(int sum=1;sum<=(n-1);sum++)
    {
        if(sum%2==1)
        {
            for(int i=0;i<=sum;i++)
            {
                cout<<a[i][sum-i]<<" ";
            }
        }
        else
        {
            for(int i=0;i<=sum;i++)
                cout<<a[sum-i][i]<<" ";
        }
    }
    for(int sum=n,i=1;sum<=2*(n-1)&&i<=n-1;sum++,i++)
    {
        if(sum%2==1)
        {
            for(int j=i;j<=sum-i;j++)
            {
                cout<<a[j][sum-j]<<" ";
            }
        }
        else{
            for(int j=i;j<=sum-i;j++)
                cout<<a[sum-j][j]<<" ";
        }
    }
    return 0;
}
