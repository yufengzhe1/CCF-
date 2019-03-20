#include <iostream>

using namespace std;

int main()
{
    long long int n;
    cin>>n;
    int sum=0;
    while(n)
    {
        sum=sum+(n%10);
        n=n/10;
    }

    cout<<sum;
    return 0;
}
