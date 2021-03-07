#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    set <int> st;
    set<int>:: iterator it;


    vector<int>arr(n);
    for(int i=0; i<n; i++)cin >> arr[i],st.insert(arr[i]);

    sort(arr.begin(),arr.end());
    arr.assign( st.begin(), st.end() );

    if(st.size() == 1)cout<<0<<endl;
    else if(st.size() == 2)
    {
        if((arr[1]-arr[0])%2 == 1)cout<<arr[1]-arr[0]<<endl;
        else{
            cout<<(arr[1]-arr[0])/2<<endl;
        }
    }
    else if(st.size()==3)
    {
        if(arr[2]-arr[1] == arr[1]-arr[0])cout<<arr[2]-arr[1]<<endl;
        else cout<<-1<<endl;

    }else{
        cout<<-1<<endl;


    }



}
