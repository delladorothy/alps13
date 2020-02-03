#include <iostream>
using namespace std;
int a[10001];
int n, i, j, temp;
int main() {
    cin >> n;
    for (i = 1; i <= n; i++)
        cin >> a[i];

    for (i = 1; i < n; i++)
    {
        for (j = 1; j <= n - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (i = 1; i <= n; i++)
        cout << a[i] << endl;
    return 0;
}