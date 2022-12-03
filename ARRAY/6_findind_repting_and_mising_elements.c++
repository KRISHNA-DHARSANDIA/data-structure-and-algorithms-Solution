#include<iostream>
#include<stdio.h>
using namespace std;


int find_elements(int arr[],int n)
{
    int a,b; 

    for(int i=0;i<n;i++)
    {
        if(arr[abs(arr[i])-1]<0)
        {
            a=abs(arr[i]);           // abs use for positive number to nagative number   and nagatie to positive number                                                                                     
        }
        else
        {
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];                                     
        }
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i]>0)
        {
            b=arr[i];     //repiting number
        }
    }


    cout<<"missing lements.....";
    cout<<a<<endl;
    
    cout<<"repiting elements.....";
    cout<<b<<endl;
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



// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
        
//         if(nums.size()==1 && target==0)
//         {
//             return -1;
//         } 
        
//         for(int i=0;i<nums.size();i++)
//         {
//             if(target==nums[i])
//             {
//                 return i;
//             }
//         }
        
//         return -1;
        
//     }
// };
