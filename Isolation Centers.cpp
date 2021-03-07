#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n, q;

        scanf("%d %d",&n, &q);
        char s[123456];
        scanf("%s",s);

        while(q--)
        {
            int c;
            scanf("%d",&c);
            int res[30]= {0};

            for (int i=0; i<n; i++)
            {
                res[int(s[i])-97]++;

            }
            int cnt = 0;

            for(int i=0; i<26; i++)
            {
                if(res[i]>c){
                    cnt+=abs(c-res[i]);
                }
            }

          printf("%d\n", cnt);

        }
    }
}
