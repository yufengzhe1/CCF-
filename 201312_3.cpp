#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
#include <cstring>
using namespace std;
int h[10000];
int main()
{
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>h[i];

    long long int smax=0;
    for(int i=0;i<n;i++)
    {
        int left=i,right=i;
        long long int s=0;
        for(int j=i;j>=0;j--)
        {
            //left=j;
            if(h[j]<h[i])
                break;
            else left=j;
        }
        for(int k=i;k<n;k++)
        {
            //right=k;
            if(h[k]<h[i])
                break;
            else right=k;
        }
        s=h[i]*(right-left+1);
        //cout<<left<<"  "<<right<<'s'<<s<<endl;
        if(smax<s)
            smax=s;
    }
    cout<<smax;
    return 0;
}
