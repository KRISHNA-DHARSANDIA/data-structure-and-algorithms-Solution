#include<iostream>
#include<bits/stdc++.h> 
using namespace std;

void quicksort(int a[50],int start,int end);

void quicksort(int a[50],int start,int end)
{
    int i,j,pivot,temp;

   if(start<end)
   {
        pivot=start;
        i=start;
        j=end;

        while(i<j)
        {
            while (a[i]<=pivot && i<end)
            {
                i++;
            }

            while(a[j]>pivot)
            {
                j--;
            }

            if(i<j)
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            
        }

        temp=pivot;
        pivot=a[j];
        a[j]=temp;
        quicksort(a,start,j-1);        
        quicksort(a,j+1,end);        

   }
}

int main()
{
    int low,high,pivot;
    int n;
    cout<< "enter youer elements";
    cin>>n;
    int i,j,k,a[n];

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout << "printing the sorted array";

    quicksort(a,0,n-1);

    for(i=0;i<n;i++)
    {
        cout<<a[i];
    }

}