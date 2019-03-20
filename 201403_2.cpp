#include <iostream>
#include <vector>
#include <utility>
#include <map>
#include <string>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int area[11][5];//最后一个表示窗口编号
int push[11][4];

bool isIn(int x,int y,int b[5])
{
    if(x>=b[0]&&x<=b[2]&&y>=b[1]&&y<=b[3])
        return true;
    else
        return false;
}
int main()
{
    int N,M;
    cin>>N>>M;
    for(int i=0;i<N;i++)
        {
            for(int j=0;j<4;j++)
                cin>>area[i][j];

            area[i][4]=i+1;
        }

    for(int i=0;i<M;i++)
        for(int j=0;j<2;j++)
        cin>>push[i][j];
    //遍历点击
    for(int i=0;i<M;i++)
    {
        //cout<<"iiiii"<<i<<endl;
        for(int j=N-1;j>=0;j--)
        {
            //cout<<"push"<<push[i][0]<<push[i][1]<<endl;
            if(isIn(push[i][0],push[i][1],area[j]))
            {
                cout<<area[j][4]<<endl;
                //cout<<"area00:"<<area[j][0]<<endl;
                //调整层次
                for(int k=j;k<N-1;k++)
                    swap(area[k],area[k+1]);

                break;
                //cout<<"area111:"<<area[j][0]<<endl;
                //for(int m=0;m<5;m++)
                    //cout<<"area[j]"<<area[j][m]<<endl;
            }
            else
            {
                if(j==0)
                    {cout<<"IGNORED"<<endl;
                    break;}
            }

        }
    }
    return 0;


}
