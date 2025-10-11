#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m = 60;
    int *ptr = &m;
    int value = *ptr;
    cout << ptr <<endl;

    int num = 60;
    int &refNum = num;
    cout << &refNum << endl;
}
