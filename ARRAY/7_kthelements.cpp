#include<iostream>
#include <bits/stdc++.h>
using namespace std;

// void quicksort(int arr[],int start,int end)
// {
//    int i,j,pivot,temp;
    
//     while(start<end)
//     {
//         pivot=start;
//         i=start;
//         j=end;
        
//         while(i<j)
//         {
//             while(arr[i]<=arr[pivot]&&i<end)
//             {
//                 i++;
//             }
            
//             while(arr[j]<arr[pivot])
//             {
//                 j--;
//             }
            
//             if(i<j)
//             {
//                 temp=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=temp;
//             }
//         }
        
//     }
    
//     temp=pivot;
//     pivot=arr[j];
//     arr[j]=temp;
    
//     quicksort(arr,start,j-1);
//     quicksort(arr,j+1,end);
// }


int main()
{
    int n;
    
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    // quicksort(arr,0,n-1);

    sort(arr,arr+n);
    
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    
    int k;
    
    cout<<"enter k"<<endl;
    cin>>k;
    
    return arr[n - k];  //cout<< arr[n-k]
    
    
}