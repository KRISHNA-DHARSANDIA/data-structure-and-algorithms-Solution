#include <iostream>
#include <vector>

using namespace std;

vector<int> helper(vector<vector<int>>& matrix)
{
      int m = matrix.size();
        int n = matrix[0].size();
        int right=n-1,left=0,bottom=m-1,top=0;
        int direction=1;
        vector<int> v;
        
        while(left<=right && top<=bottom)
        {
            if(direction==1)
            {
                for(int i=left;i<=right;i++)  v.push_back(matrix[top][i]); 
                direction = 2;
                top++;
            }

            else if(direction==2)
            {
                for(int i=top;i<=bottom;i++)  v.push_back(matrix[i][right]);
                direction = 3;
                 right--;
            }

            else if(direction==3)
            {
                for(int i=right;i>=left;i--) v.push_back(matrix[bottom][i]); 
                direction = 4;
                 bottom--;
            }

            else if(direction==4)
            {
                for(int i=bottom;i>=top;i--) v.push_back(matrix[i][left]);
                direction=1;
                left++;
            }
        }
        return v;
}

int main()
{
    vector<vector<int>> matrix;
    vector<int> v;
    int row, col;

    cout << "Enter The Row size" << endl;
    cin >> row;

    cout << "Enter The column size" << endl;
    cin >> col;

    cout << "enter matix value" << endl;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {   
            int p;
            cin>>p; 
            v.push_back(p);
        }

        cout<<"Matrix new"<<endl;

        matrix.push_back(v);
    }

    helper(matrix);
}