#include<iostream>
#include<stdio.h>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

class solution 
{
    public:
    
    void kths(int arr[],int l,int r,int n,int k)
    {
        
        //using hep 
        
        priority_queue<int>minheap;
        
        for(int i=0;i<n;i++)
        {
            minheap.push(arr[i]);
            
            if(minheap.size()>k)
            {
                minheap.pop();
            }
        }
        
        cout<<minheap.top();
    }
    
    
}s1;

int main()
{

   int n,arr[10],k,i;
    
    cout<<"enter number of elements"<<endl;
    
    cin>>n;
    
    cout<<"enter elements"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter kth smallest elements"<<endl;
    
    cin>>k;
    
    int l=0;
    int r=n-1;
    
    s1.kths(arr,l,r,n,k);
    
}