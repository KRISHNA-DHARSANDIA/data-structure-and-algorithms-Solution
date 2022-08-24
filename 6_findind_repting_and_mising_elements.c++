#include<iostream>
#include<stdio.h>
using namespace std;


int find_elements(int arr[],int n)
{
    int a,b;

    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i]-1)]<0)
        {
            a=abs(arr[i]);
        }
        else{
            arr[abs(arr[i]-1)]=-arr[abs(arr[i]-1)];
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            b=arr[i];
        }
    }


    cout<<"missing lements";
    cout<<a;
    
    cout<<"repiting elements";
    cout<<b;
}

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    find_elements(arr,n);


}
