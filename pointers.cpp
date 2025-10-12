#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b) {
     int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
//    int x = 5;
//    int y = 10;
//    std::cout << "Before swap: x = " << x << ", y = " << y << std::endl;
//    swap(&x, &y);
//    std::cout << "After swap: x = " << x << ", y = " << y << std::endl;

//    int sz;
//    cout << "inter array size: ";
//    cin >> sz;
//    int *arr = new int[sz];
//    for(int i = 0; i < sz; i++)
//    {
//        int a;
//        cin >> a;
//        arr[i] = a;
//    }
//    for(int i = 0; i < sz; i++)
//    {
//        cout << arr[i] << " ";
//    }
//    delete[] arr;
//    arr = nullptr;
//    return 0;

    int arr[5] = {10, 15, 20, 25, 30};
    int *pArr = arr;
    int *pArr2 = pArr + 4;
    int temp;
    for(int i = 0; i < 5 / 2; i++)
    {
        temp = *pArr;
        *pArr = *pArr2;
        *pArr2 = temp;
        pArr++;
        pArr2--;
    }
    for(int i = 0; i < 5; i++)
    {
        cout << arr[i] << endl;
    }
}
