#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k,d;
        cin >> n >> k >> d;
        int tv[n+6];
        set<int> st;

        for(int i=0; i<n ; i++)cin >> tv[i];
        st.insert(tv[0]);
        int cnt =1, mx = -1;
        for(int i=1; i<n; i++)
        {
            if(cnt == d)
            {
                //cout<<cnt<<endl;
                break;
            }
            else if(cnt < d)
            {
                if(tv[i] != tv[i-1] && !(st.find(tv[i]) != st.end()))
                {
                    cnt++;

                    st.insert(tv[i]);
                }
                else
                {
                    st.clear();
                    mx = max(mx, cnt);
                    cnt = 0;

                }
            }
        }
        cout<<max(cnt,mx)<<endl;
        st.clear();


    }
}



