#include<bits/stdc++.h>
using namespace std;

int recursiveFunction(int n)
{
    if(n > 0)
    {
        char arr[1000];
        recursiveFunction(n - 1);
    }
    if(n == 0)cout << "run successfully" << endl;
    return 0;

}

int main()
{
    cout << sizeof(char) * 600 * 1000 << endl;
    recursiveFunction(600);
}
