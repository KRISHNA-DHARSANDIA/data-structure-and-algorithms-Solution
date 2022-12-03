#include<iostream>
#include<conio.h>
#include<vector>

using namespace std;

int main()
{

    vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};
    
    int rowsize = matrix.size();//priting the size of vector for row because row 
    int columnsize = matrix[0].size();  // printing the size of column in vector 
 
    cout<<"C"<<columnsize<<endl;
    cout<<"R"<<rowsize<<endl;

}