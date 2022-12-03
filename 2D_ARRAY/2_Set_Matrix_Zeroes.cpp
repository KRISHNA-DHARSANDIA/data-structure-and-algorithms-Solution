#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int columnsize = matrix[0].size();
        int rowsize = matrix.size();
        
        vector<int>rowmaker(rowsize,1); // 
        vector<int>columnmaker(columnsize,1); // (3,1) 1,1,1


        cout<<"Before working on 0"<<endl;

        for(int i = 0;i<rowsize;i++)
        {
            for(int j=0;j<columnsize;j++)
            {
                cout<<matrix[i][j];
            }

            cout<<"\n";
        }
        
        
        for(int i = 0 ; i < rowsize ; i++)
        {
            for(int j = 0 ; j < columnsize ; j++)
            {
                if(matrix[i][j]==0)
                {
                    rowmaker[i] = 0;
                    columnmaker[j] = 0;
                }
            }
        }
        
        
        for(int i = 0;i<rowsize;i++)
        {
            for(int j=0;j<columnsize;j++)
            {
                if(rowmaker[i] == 0 || columnmaker[j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }

        cout<<"After working on 0"<<endl;

        for(int i = 0;i<rowsize;i++)
        {
            for(int j=0;j<columnsize;j++)
            {
                cout<<matrix[i][j];
            }

            cout<<"\n";
        }
        
    }
};

int main()
{

    Solution s1;

    vector<vector<int>>matrix = {{1,1,1},{1,0,1},{1,1,1}};

    s1.setZeroes(matrix);

    // vector<int>v;

    // int n;

    // cout<<"Enter the size of matrix"<<endl;
    // cin>>n;

    // for(int i=0;i<n;i++)
    // {
    //    v.push_back(i);   
    // }

    // matrix.push_back(v);

     



    
}