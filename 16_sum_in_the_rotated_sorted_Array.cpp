#include<iostream.h>
#include<stdio.h>
#include<conio.h>

class
{
    public:
    
    int i;
    
    void sum(int arr[],int n,int s)
    {
      for(i=0;i<n;i++)
      {
          if(arr[i]<arr[i+1])
          {
            
             int L=(i+1)%n;
              
             int R=i;
              
              while(L!=R)
              {
                  
                  if(arr[L]+arr[R]==s)
                  {
                        cout<<"true";
                        //exit(0);
                        
                  }
                  
                  if(arr[L]+arr[R]<s)
                  {
                      L=(L+1)%n; //L++
                  }
                  else
                  {
                      R = (n + R - 1) % n;  //R--;
                  }
                  
              }
              
              cout<<"false";
              //exit(0);
          }
      }
    }
}s1;

int main()
{
   int n,arr[10],s,i;
    
    cout<<"enter number of elements"<<endl;
    
    cin>>n;
    
    cout<<"enter elements"<<endl;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"enter number of sume"<<endl;
    
    cin>>s;
    
    s1.sum(arr,n,s);
    
}