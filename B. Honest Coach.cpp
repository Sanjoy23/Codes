#include <bits/stdc++.h>
using namespace std;


int main()
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        int team[n+5];
        for(int i=0; i<n; i++)
        {
            cin >> team[i];
        }

        int a, b;
        int guess = 20000;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n and i != j; j++)
            {
                int temp = abs(team[i] - team[j]);
                if(temp <= guess)
                {
                    guess = temp;
                    a = i;
                    b = j;
                }
            }
        }
        cout<< abs(team[a]-team[b])<<endl;
    }


}
