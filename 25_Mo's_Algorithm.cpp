#include<bits/stdc++.h>
using namespace std;

int block;

struct Query
{
    int L,R;
};

bool compare(Query q1,Query q2)
{
    if(q1.L/block!=q2.L/block)
        return q1.L/block<q2.L/block;

    return q1.R<q2.R;
}

void queryResults(int arr[],int n,Query q[],int m)
{
    block=(int)sqrt(n);

    sort(q,q+m,compare);

    int currL=0;
    int currR=0;
    int currsum=0;

    for(int i=0;i<m;i++)
    {
        
        int L=q[i].L;
        int R=q[i].R;
        
        while(currL<L)
        {
            currsum-=arr[currL];
            currL++;
        }

        while(currL>L)
        {
            currsum+=arr[currL];
            currL--;
        }

        while(currR<=R)
        {
            currsum+=arr[currR];
            currR++;
        }

        while(currR>R+1)
        {
            currsum-=arr[currR];
            currR--;
        }

        cout<<"sum of [" <<L <<","<<R<<"]is"<<currsum<<endl;

    }

}


int main()
{

   int n,arr[10],k,i;
    
    cout<<"enter number of elements // 9 elements"<<endl;
    
    cin>>n;
    
    cout<<"enter elements"<<endl;
    
    for(i=0;i<9;i++)
    {
        cin>>arr[i];
    }

    Query q[]={{0,4},{1,3},{2,4}};

    int m=sizeof(q)/sizeof(q[0]);
    
     queryResults(arr,n,q,m);
}




// enter number of elements // 9 elements
// 9
// enter elements
// 1
// 1
// 2
// 1
// 3
// 4
// 5
// 2
// 8
// sum of [1,3]is4
// sum of [0,4]is8
// sum of [2,4]is6


// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// int rootN;


// struct Query
// {
//     int L,R;
// };

// bool compare(Query q1,Query q2)
// {
//     if(q1.L/block!=q2.L/block)
//         return q1.L/block<q2.L/block;

//     return q1.R<q2.R;
// }

// void queryResults(int arr[],int n,Query q[],int m)
// {
//    rootN=(int)sqrt(n);

//     sort(q,q+m,compare);

//     int currL=0;
//     int currR=0;
//     int currsum=0;

//     for(int i=0;i<m;i++)
//     {
        
//         int L=q[i].L;
//         int R=q[i].R;
        
//         while(currL<L)
//         {
//             currsum-=arr[currL];
//             currL++;
//         }

//         while(currL>L)
//         {
//             currsum+=arr[currL];
//             currL--;
//         }

//         while(currR<=R)
//         {
//             currsum+=arr[currR];
//             currR++;
//         }

//         while(currR>R+1)
//         {
//             currsum-=arr[currR];
//             currR--;
//         }

//         cout<<"sum of [" <<L <<","<<R<<"]is"<<currsum<<endl;

//     }

// }


// int main()
// {

//    int n,arr[10],k,i;
    
//     cout<<"enter number of elements // 9 elements"<<endl;
    
//     cin>>n;
    
//     cout<<"enter elements"<<endl;
    
//     for(i=0;i<n;i++)
//     {
//         cin>>arr[i];
//     }

//     Query q;
    
//     cout<<"enter Query"<<endl;
    
//     rootN=sqrt(n);
    
//     int querys;
//     cin>>querys;
    
//     for(int i=0;i<queries;i++)
//     {
//         int L,R;
        
//         cin>>L>>R;
        
//         Query[i].L=L;
//         Query[i].R=R;
//         Query[i].index=i;
//     }
    
//     int m=sizeof(q)/sizeof(q[0]);
    
//      queryResults(arr,n,q,m);
// }


