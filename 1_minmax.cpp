#include<iostream>
#include<stdio.h>
using namespace std;


struct minmax{
    int min;
    int max;
}m;

void Minmax(int a[],int n)
{	

		if(a[0]<a[1])
			{
				m.max=a[1];
				m.min=a[0];
			}
		else if(a[0]>a[1])
			{
				m.max=a[0];
				m.min=a[1];
			}
	for(int i=2;i<n;i++)
	{
		if(a[i]>m.max)
		{
			m.max=a[i];
		}
		else if(a[i]<m.min)
		{
			m.min=a[i];
		}
	}
}

int main()
{
	int n;
	cin>>n;
	int a[n];

	cout<<"enter elements"<<endl;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}

	Minmax(a,n);

	cout<<"maximuim value of array is......";
	cout<<m.max<<endl;

	cout<<"minimum value of array is......";
	cout<<m.min<<endl;

	return 0;
}
