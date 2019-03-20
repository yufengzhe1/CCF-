#include <iostream>

using namespace std;
//太大，放在局部变量会导致堆栈溢出 
int t1[1000001]={0};
int t2[1000001]={0};
int main()
{
	//初始化以及输入
	int n;
	cin>>n;
	int *a=new int[n];
	int *b=new int[n];
	int *c=new int[n];
	int *d=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	for(int j=0;j<n;j++)
	{
		cin>>c[j]>>d[j];
	}
	//计算,利用两个数组
	//装车时是1，两个数组相加，有多少个2就是多长时间
    //由于1000000太大，导致堆栈溢出，所以将两个数组放在全局变量
	for(int k=0;k<n;k++)
	{
		for(int p=a[k];p <b[k];p++)
			t1[p]=1;
		for(int m=c[k];m<d[k];m++)
			t2[m]=1;
	}
	long long int sum=0;
	for(int num=0;num <1000001;num++)
	{
		if(t1[num]==1&&t2[num]==1)
			sum+=1;
	}
	cout<<sum;
	return 0;
}

