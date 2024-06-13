#include <iostream>
#include <vector>
using namespace std;

vector<int> common(int A[],int B[],int C[],int n1,int n2,int n3)
{
    int i,j,k;

    vector<int>ans;

    while(i<n1 && j<n2 && k<n3)
    {
        if(A[i] && B[j] && C[k])
        {
            ans.push_back(A[i]);
            i++;
            j++;
            k++;
        }

        else if(A[i]<B[j])
        {
            i++;
        }

        else if(B[j]<C[k])
        {
            j++;
        }

        else
        {
            k++;
        }

        int x = A[i-1];
        while(A[i]==x)i++;

        int y = B[j-1];
        while (B[j]==y)j++;

        int z = C[k-1];
        while (C[k]==z)k++;    
       
    }
      if(ans.size()==0)return {-1};

      return ans;

}

int main()
{
    int p, q, r;

    int a[10], b[10], c[10];

    cout << "Enter first Array size " << endl;
    cin >> p;

    cout << "Enter first Arrar" << endl;
    for (int i = 0; i < p; i++)
    {
        cin >> a[i];
    }

    cout << "Enter Second Arrar size" << endl;
    cin >> q;

    cout << "Enter Second Arrar" << endl;
    for (int i = 0; i < q; i++)
    {
        cin >> b[i];
    }

    cout << "Enter Thared Arrar size" << endl;
    cin >> r;

    cout << "Enter Thared Arrar" << endl;
    for (int i = 0; i < r; i++)
    {
        cin >> c[i];
    }

    common(a,b,c,p,q,r);
}