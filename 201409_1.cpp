#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[1001];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int num=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
    {
        if((a[i]-a[j])==1)
            num++;
    }
    cout<<num;
    return 0;
}
