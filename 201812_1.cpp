#include <iostream>
using namespace std;

int main()
{
	//�������½����� 
	int r,y,g,n;
	cin>>r>>y>>g;
	cin>>n;
	int *arr_kind=new int[n];
	int *arr_t=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr_kind[i]>>arr_t[i];
	}
	//���㲿��
	long long int sum=0;//����ʱ���ʼ��Ϊ��
	for(int j=0;j<n;j++)
	{
		if(arr_kind[j]==0||arr_kind[j]==1)
			sum+=arr_t[j];
		else if(arr_kind[j]==2)
			sum=sum+r+arr_t[j];
		else if(arr_kind[j]==3)
			sum+=0;
	} 
	//��������� 
	cout<<sum;
	return 0;	
}
