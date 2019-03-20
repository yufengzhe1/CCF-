#include <iostream>

using namespace std;
int s[100000];
int num[100000];
int main()
{
    int n;;
    cin>>n;
    for(int i=0;i<n;i++)
        {
            num[i]=1;
            cout<<"i:"<<i<<endl;
            cin>>s[i];
            for(int j=0;j<i;j++)
            {

                if(s[i]==s[j])
                {
                    num[i]++;
                    //if(i==4)
                       // cout<<"4444"<<endl;
                    //cout<<i<<" "<<s[i]<<"num"<<num[i]<<endl;
                }
            }
        }
    int number=0;
    int out=0;
    for(int i=0;i<n-1;i++)
    {
        if(num[i]>number)
        {
            number=num[i];
            out=s[i];
        }
        else if(num[i]==number)
        {
            if(out>s[i])
                out=s[i];
        }
    }
    cout<<out;
    return 0;

}
