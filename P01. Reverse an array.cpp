#include <bits/stdc++.h>
using namespace std;

int arr[1000005];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)cin >> arr[i];
    int temp = 0;

    for (int i = 0; i < n/2; i++){
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
