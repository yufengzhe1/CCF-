#include  <iostream>

using namespace std;
//int a[100001];
//int *b[100001];
int main()
{
    int N,M;
    cin>>N>>M;
    int *a=new int[N];
    int **b=new int*[M];
    for(int i=1;i<=N;i++)
    cin>>a[i];
    for(int j=1;j<=M;j++)
    {
        int temp;
        cin>>temp;
        if(temp==1)
        {
            b[j]=new int[4];
            b[j][0]=temp;
            for(int k=1;k<4;k++)
                cin>>b[j][k];
        }
        else
        {
            b[j]=new int[3];
            b[j][0]=temp;
            for(int k=1;k<3;k++)
                cin>>b[j][k];
        }
    }

    for(int i=1;i<=M;i++)
    {
        if(b[i][0]==2)
        {
            long long int sum=0;
            for(int j=b[i][1];j<=b[i][2];j++)
                sum+=a[j];
            cout<<sum<<endl;
        }
        else{
            for(int j=b[i][1];j<=b[i][2];j++)
                {
                    if(b[i][3]==1)
                        continue;
                    if(a[j]>=b[i][3]&&a[j]%b[i][3]==0)
                        a[j]/=b[i][3];
                }
        }
    }

    return 0;

}
