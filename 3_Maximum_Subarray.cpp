#include<iostream>
#include<climits>
#include<stdio.h>
using namespace std;

// int kadane(int arr[],int n)
// {
//     int maxsum=INT_MIN;
//     int currentsum=0;
//     for(int i=0;i<n;i++)
//     {
//         currentsum+=arr[i];
//         if(currentsum<0){
//             currentsum=0;
//         }
//         maxsum=max(maxsum,currentsum);
//     }
//     return maxsum;
// }

// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }     

//     int wrapsum;
//     int nonwrapsum;       
//     int totalsum=0;     
    
//     nonwrapsum=kadane(arr,n);
    
//         for(int i=0;i<n;i++)
//         {
//             totalsum+=arr[i];
//             arr[i]=-arr[i];
//         }
    

//     wrapsum=totalsum +kadane(arr,n);

//     cout <<max(wrapsum,nonwrapsum);
// }  

// bool parisum(int arr[],int n,int k)
// {
//     int low=0;
//     int high=n-1;

//     while(low<high)
//     {
//         if(arr[low]+arr[high]==k)
//         {
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }

//         else if(arr[low]+arr[high]>k)
//         {
//             high--;
//         }
        
//         else
//         {
//             low++;
//         }

//     }
//     return false;
// }

// int main() // for broutforce aprouch
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     int k=30;

//     for(int i=0;i<n;i++)
//     {
//         cin >> arr[i];
//     }

//         cout << parisum(arr,8,k)<<endl;
// }


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n; // number of elements
    int a[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    
    int currentsum=0;
    int maxsum=0;
    
    for(int i=0;i<n;i++)
    {
        currentsum=currentsum+a[i];
        if(currentsum>maxsum)
        {
            maxsum=currentsum;
        }
        if(currentsum<0)
        {
            currentsum=0;
        }
    }


return max(currentsum,maxsum); // maximum sum of arrray

cout<<maxsum;

}