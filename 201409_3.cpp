#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
/*string be_normol(string &str)
{
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] <= 'Z' && str[i] >= 'A')
        {
            str[i] = str[i]-'A'+'a';
        }
    }
    return str;
}*/


int main()
{
    string s;
    cin>>s;
    int flag;//0大小写不敏感，1大小写敏感
    cin>>flag;
    int num;
    cin>>num;
    string str[101];
    for(int i=0;i<num;i++)
        cin>>str[i];

    if(flag==1)
    {
        for(int i=0;i<num;i++)
        {
            if(str[i].find(s)!=string::npos)
                cout<<str[i]<<endl;
        }
    }
    else if(flag==0)
    {
        for(int i=0;i<num;i++)
        {
            string temp=str[i];
            //be_normol(str[i]);
            //be_normol(s);
            transform(str[i].begin(),str[i].end(), str[i].begin(), ::toupper);
            transform(s.begin(), s.end(), s.begin(), ::toupper);
            if(str[i].find(s)!=string::npos)
                cout<<temp<<endl;
        }
    }
    return 0;
}
