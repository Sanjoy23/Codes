#include <bits/stdc++.h>
using namespace std;
//
//bool compareCustom(int a, int b) {
//    return (a % 2 != b % 2) && (a < b);
//}

int main() {
	// your code goes here
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int arr[n + 4];
        int even = 0, odd = 0;
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
            if(arr[i] & 1) odd++;
            else even++;
        }
        if(even && odd) sort(arr, arr + n);
        for(int i = 0; i < n - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << arr[n - 1] << endl;
    }
}
