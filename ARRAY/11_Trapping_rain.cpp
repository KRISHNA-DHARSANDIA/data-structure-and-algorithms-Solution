class Solution {
public:
    int trap(vector<int>& height) {
        
     int n=height.size();
     int left[]=new int[n];
     int right[]=new int[n];
     
       left[0]=height[0];
        
        for(int i=1;i<n;i++)
        {
            left[i]=max(height[i-1],height[i]);
        }
    
       right[n-1]=height[n-1];
        
        for(int i=n-1;i>=0;i--)
        {
            right[i]=max(height[i+1],height[i]);    
            
            cout<<" "<<right[i]<<endl;;
              cout<<" "<<left[i];
        }
     
        
        
        int ans=0;
        
        for(int i=0;i<n;i++)
        {
            ans+=(min(left[i],right[i])-height[i]);
        }
        
        return ans;
    }
};





// #include <bits/stdc++.h>

// using namespace std;

// class solution {
// public:
//     int trap(int height[]) {
        
//      int n=height.size();
//      int left[n];
//      int right[n];
     
//        left[0]=height[0];
        
//         for(int i=1;i<n;i++)
//         {
//             left[i]=max(height[i-1],height[i]);
//         }
    
//        right[n-1]=height[n-1];
        
//         for(int i=n-1;i>=0;i--)
//         {
//             right[i]=max(height[i+1],height[i]);         
//         }
     
//         int ans=0;
        
//         for(int i=0;i<n-1;i++)
//         {
//             ans+=(min(left[i],right[i])-height[i]);
//         }
        
//         return ans;
//     }
// };


// int main()
// {
//     solution s1;
    
//     int arr[];
    
//    arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
    
//     // int n;
    
//     // cin>>n;
    
//     // for(int i=0;i<n;i++)
//     // {
//     //   height.push_back(i);
//     // }
    

    
//     s1.trap(arr);
    
// }