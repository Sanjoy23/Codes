#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    int n, p;
    int arr[25];
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d", &n);
        scanf("%d", &p);
        for(int i=0; i<p; i++)
        {
            scanf("%d",&arr[i]);
        }
        int sum = 0;
        for(int i=0; i<(1<<p); i++)
        {
            sum =0;
            for(int j=0; j < p; j++)
            {
                if(i & (1 << j))
                {
                    sum += arr[j];
                }
            }
            if(sum == n)break;
        }
        if(sum == n)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }


}
