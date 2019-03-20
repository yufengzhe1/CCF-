#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;
bool isRight(char c);
string str[21];
int main()
{
    string command;
    cin>>command;
    vector<pair<char,bool> > com;
    for(int i=0;i<command.size()-1;i++)
    {
        pair<char,bool> p;//first为命令，second为是否带参数
        p.first=command[i];
        if(command[i+1]==':')
            p.second=true;
        else p.second=false;
        com.push_back(p);
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        getline(cin,str[i]);
    //处理
    for(int i=0;i<n;i++)
    {
        cout<<"Case "<<i<<": ";
        //
        if(str[i].find_first_of("-")==string::nops)
            cout<<endl;

        else{
            int num=str[i].find_first_of("-");
        for(int j=num+1;j<str[i].size();j++)
        {

        }
        }
    }

}

bool isRight(char c)
{

}
