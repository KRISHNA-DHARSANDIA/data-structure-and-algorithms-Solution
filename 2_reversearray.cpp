#include<iostream>
using namespace std;

void reverse(int a[],int start,int end)
{ 
    int temp;
    while(start<end)
    {
           temp=a[start];
           a[start]=a[end];
           a[end]=temp;
           start++;
           end--;
    }
}


void printarray(int array[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<array[i] <<" ";
    }
}

int main()
{
   
   int n;
   cin>>n;
   cout<<"enter elemants"<<endl;

   int a[n];
   
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }

  cout<<"reverse array"; 

   reverse(a,0,n-1);
   printarray(a,n);
}