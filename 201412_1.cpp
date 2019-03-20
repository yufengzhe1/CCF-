#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    vector <pair<int ,int > > p;

    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        pair<int,int> temp;
        cin>>temp.first;
        int num=1;
        if(i>=1)
        {
            for(int j=0;j<p.size();j++)
            {
                if(p[j].first==temp.first)
                    num++;
            }
        }
        temp.second=num;
        p.push_back(temp);
    }
    for(int i=0;i<p.size();i++)
        cout<<p[i].second<<" ";
    return 0;

}
