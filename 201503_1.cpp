#include <iostream>

using namespace std;
int a[1001][1001],b[1001][1001];
int main()
{
    int n,m;
    cin>>n>>m;
    //cout<<"input"<<endl;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        cin>>a[i][j];
    int r=0,l=0;
    //cout<<"input2222"<<endl;
    for(int j=m-1;j>=0;j--)
    {

        l=0;
        for(int i=0;i<n;i++)
            b[r][l++]=a[i][j];
        r++;
    }
    for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
                cout<<b[i][j]<<" ";
            cout<<endl;
        }
    return 0;
}
