#include<bits/stdc++.h>
using namespace std;


/* Function to find the candidate for Majority */
int findcandidate(int arr[],int size)
{
    int count=1;
    int major_index=0;

    for(int i=1;i<size;i++)
    {
        if(arr[major_index]==arr[i])
        {
            count++;
        }
        else
        {
            count--;
        }

        if(count==0)
        {
            major_index=i;
            count=1;
        }
    }

return arr[major_index];

}

bool ismajority(int arr[],int size,int cand)
{
    int count=0;

    for(int i=0;i<size;i++)
    
        if(arr[i]==cand)
        count++;

        if(count>size/2)
        return 1;

        else
        return 0;
    
}

void printmajority(int arr[],int size)
{

    int cand=findcandidate(arr,size);

    if(ismajority(arr,size,cand))
    cout<<" "<<cand<<" ";

    else
    cout<<"majority elemnts not present"<<endl;
    
}


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
    
     printmajority(arr,n);
}


