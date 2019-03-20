#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int num=0;
    for(int i=0;i<n-1;i++)
    {
        num++;
        while(a[i]==a[i+1])
        {
            i++;
        }
    }
    if(a[n-1]!=a[n-2])
        num++;
    cout<<num;
    delete [] a;
    return 0;
}
