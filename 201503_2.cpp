#include <iostream>
#include <utility>
#include <vector>
using namespace std;
int a[1001];
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    vector<pair<int,int> > p;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=-1)
        {
            pair<int,int> temp;
            temp.first=a[i];
            //cout<<a[i]<<"aiaiai    "<<endl;
            temp.second=1;
            for(int j=i+1;j<n;j++)
            {
                if(a[i]==a[j])
                {
                    temp.second++;
                    a[j]=-1;
                }
            }
            //cout<<temp.second<<"second"<<endl;
            p.push_back(temp);
        }
    }
    if(a[n-1]!=-1)
    {
        pair<int,int> temp;
        temp.first=a[n-1];
        temp.second=1;
        p.push_back(temp);
    }
    for(int i=0;i<p.size()-1;i++)
    {
        for(int j=i+1;j<p.size();j++)
        {
            if(p[j].second>p[i].second)
            {
                pair<int,int> temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
            else if(p[j].second==p[i].second)
            {
                if(p[j].first<p[i].first)
                {
                    pair<int,int> temp=p[i];
                    p[i]=p[j];
                    p[j]=temp;
                }
            }
        }
    }

    for(int i=0;i<p.size();i++)
        cout<<p[i].first<<" "<<p[i].second<<endl;
    return 0;
}
