
// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define ROW 5
#define CUL 4

int minu(int a, int b)
{
return (a < b) ? a : b;
}
 

int min(int a, int b, int c)
{
    return minu(minu(a, b), c);
}
 

int max(int a, int b)
{
    return (a > b) ? a : b;
}


void diagonal_array(int arr[][5])
{
    for(int line=1;line<(CUL+ROW);line++) // 4 + 5  = 9
    {
        int start_count = max(0,(line-ROW)); //-4,-3,-2,-1,0,1,2,3,
        
        int count = min(line ,(CUL - start_count)); // 1,2,3,4,4,3,2,1 this present diagonal count
        
        for(int j=0;j<count;j++)
        {
            cout<<"\t"<<arr[minu(ROW , line)-j-1][start_count+j]; 
        }
        
        cout<<endl;
    }
}


int main()
{
    int arr[5][5];

    cout<<"ENTER THE ARRAY VALUE"<<endl;

    for(int i=0;i<5;i++)
    {
        for(int j=0;j<4;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    cout<<"Printing diagonal_array...."<<endl;
    
    diagonal_array(arr);
}
