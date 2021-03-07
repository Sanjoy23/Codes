#include <iostream>

#include <algorithm>

using namespace std;



int main() {

    int n, m;

    cin >> n >> m;

    while (n || m) {

        int a[20], b[20], c[20], p[8];

        for (int k = 0; k < m; k++)

            cin >> a[k] >> b[k] >> c[k];

        for (int i = 0; i < n; i++)

            p[i] = i;

        signed long long int sol = 0;

        do {

            bool valid = true;

            for (int k = 0; k < m; k++) {

                int i = 0;

                for (; i < n; i++)

                    if (p[i] == a[k])

                        break;
                int j = 0;

                for (; j < n; j++)

                    if (p[j] == b[k])

                        break;

                if (c[k] > 0 && abs(i - j) > c[k]) {

                    valid = false;

                    break;

                }

                if (c[k] < 0 && abs(i - j) < -c[k]) {

                    valid = false;

                    break;

                }

            }

            if (valid)

                sol++;

        } while (next_permutation(p, p + n));

        cout << sol << endl;

        cin >> n >> m;

    }
    */dfsfsdf*/



    return 0;

}
