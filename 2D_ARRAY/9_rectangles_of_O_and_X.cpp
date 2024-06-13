#include <iostream>

using namespace std;

void helper(int row, int col)
{
    int i, r = 0, c = 0;

    char x = 'X';

    int p = row, q = col;

    char arr[row][col];

    while(row>r && col>c)
    {
            for(int i=r;i<row;i++)
            {
                arr[c][i] = x;
            }
           c++;
    

            for(int i=c;i<col;i++)
            {
                arr[i][col-1] = x;
            }
            col--;

            if(row>r)
            {
                for(int i=col-1;i>=r;i--)
                {
                    arr[row-1][i] = x;
                }
                row--;

                for(int i=row-1;i>=r;i--)
                {
                    arr[i][r] = x;
                }

                r++;
            }

            x = (x == '0')? 'X':'0';
    }

    for(int i=0;i<p;i++)
    {
        for(int j=0;j<q;j++)
        {
            cout<<arr[i][j]<<"\t";
        }

        cout<<"\n";
    }
}

int main()
{
    int row, col;

    cout << "row :" << endl;
    cin >> row;

    cout << "col :" << endl;
    cin >> col;

    helper(row, col);
}