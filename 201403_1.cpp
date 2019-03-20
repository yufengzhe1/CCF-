#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>
int a[501];
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int num=0;
    for(int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
    {
        if(a[i]+a[j]==0)
            num++;
    }
    cout<<num;
    return 0;
}
