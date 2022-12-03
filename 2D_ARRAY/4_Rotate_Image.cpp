#include "iostream"
#include "vector"
#include <bits/stdc++.h>

using namespace std;

void helper(vector<vector<int>> &m)
{
    int n = m.size();
    int temp;

    for (int i = 0; i < (n + 1) / 2; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            temp = m[n - 1 - j][i];
            m[n - 1 - j][i] = m[n - 1 - i][n - 1 - j];
            m[n - 1 - i][n - 1 - j] = m[j][n - 1 - i];
            m[j][n - 1 - i] = m[i][j];
            m[i][j] = temp;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m[i].size(); j++)
        {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }
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
            cin >> p;
            v.push_back(p);
            
        }

        cout << "Matrix new" << endl;

        matrix.push_back(v);
    }

    helper(matrix);
}
