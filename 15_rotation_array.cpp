//for only turbo c++
#include<iostream.h>
#include<stdio.h>

class
{
    public:
    
    void roted_array(int arr[],int n,int r)
    {
        int temp[15];
        int i,k=0;
        
        for(i=r;i<n;i++)
        {
            temp[k]=arr[i];
            k++;
        }
        
        for(i=0;i<r;i++)
        {
            temp[k]=arr[i];
            k++;
        }
        
        for(i=0;i<n;i++)
        {
            arr[i]=temp[i];
        }
    }

    void PrintTheArray(int arr[], int n)

    for (int i=0;i<n;i++)
    {
        cout << arr[i] << " ";
    }

}r1;

int main()
{
    
    int n,arr[10],r,i;
    
    cout<<"enter number of elements"<<endl;
    
    cin>>n;
    
    cout<<"enter elements"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter number of rotation"<<endl;
    
    cin>>r;
        
    r1.roted_array(arr,n,r);
    
    cout<<"after rotation array"<<endl;
    
    r1.PrintTheArray(arr,n);
    
}