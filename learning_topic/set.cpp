
#include<iostream>
#include<set>
using namespace std;

int main()
{
    set<char>kr;

    kr.insert('K');
    kr.insert('r');
    kr.insert('i');
    kr.insert('s');
    kr.insert('h');
    kr.insert('n');
    kr.insert('a');

    for(auto& a:kr)
    {
        cout << a << ' ';
    }

    return 0;
}