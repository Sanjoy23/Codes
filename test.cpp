#include <bits/stdc++.h>
using namespace std;

void sum(int *p)
{
    cout << *p + 10 << endl;
}

int main()
{
    int x = 10;
    sum(&x);
}
