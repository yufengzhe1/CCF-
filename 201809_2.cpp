#include <iostream>

using namespace std;
//̫�󣬷��ھֲ������ᵼ�¶�ջ��� 
int t1[1000001]={0};
int t2[1000001]={0};
int main()
{
	//��ʼ���Լ�����
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
	//����,������������
	//װ��ʱ��1������������ӣ��ж��ٸ�2���Ƕ೤ʱ��
    //����1000000̫�󣬵��¶�ջ��������Խ������������ȫ�ֱ���
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

