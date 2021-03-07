#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        int man[n+5];
        for (int i=0; i<n; i++)
        {
            cin >> man[i];
        }
        sort(man, man+n);
        queue<int> q;
        /*for(int i=0; i<n; i++)
        {
            int k = i;
            cnt = 0;
            for(int j=i; j<n; j++)
            {
                if(abs(man[k]-man[j])<3)
                {
                    k = j;
                    cnt++;
                    //cout<<i<<"->"<<cnt<<endl;


                }
            }
            k=i;
            cnt-=1;
            for(int j=i; j>=0; j--)
            {
                if(abs(man[k]-man[j])<3)
                {
                    k = j;
                    cnt++;


                }
            }


            q.push(cnt);
        }
        int low=20, high= 0;
        int len = q.size();

        while(!q.empty())
        {
            int temp = q.front();
            q.pop();

            if(temp >= high)
            {
                high = temp;
            }
            if(temp <= low)
            {
                low = temp;
            }

        }*/

        int cnt = 1;
        int res[n+5],k = 0;

        for (int i=0; i<n; i++){
            if(abs(man[i]-man[i+1])<3){
                cnt++;

            }else{
                res[k++] = cnt;
                cnt = 1;

            }

        }

        int low=20, high= 0;
        int len = q.size();

        sort(res, res+n);

        cout<<res[0]<<" "<<res[k-1]<<endl;

    }
}
