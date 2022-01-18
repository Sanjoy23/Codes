
#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

int main() {
    int n;
    cin >> n;
    int a, b;
    for (int i = 0; i < n; i++)cin >> arr[i];
   cin >> a >> b;
   int cnt = 0;

    for (int i = a; i <= b; i++){
        cnt += arr[i];
    }
    cout<<cnt<<endl;

}
