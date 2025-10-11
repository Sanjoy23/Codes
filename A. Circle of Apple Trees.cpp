#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here

    int tc;
    int n;
    cin >> tc;
    while(tc--)
    {
        cin >> n;
        set<int> treeSet;
        int a;
        for(int i = 0; i < n; i++)
        {
            cin >> a;
            treeSet.insert(a);
        }
        
        cout << treeSet.size() << endl;
    }
}
