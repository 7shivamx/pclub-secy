#include <bits/stdc++.h>
using namespace std;
 
char arr[50][50];
bool check[50][50] = {};
 
void solve(int n, int m, int x, int y)
{
    int count = 0;
    for (int i = 0; i <= n - x; i++)
    {
        for (int j = 0; j <= m - y; j++)
        {
            count = 0;
            for (int k = 0; k < x; k++)
                for (int l = 0; l < y; l++)
                    count += arr[i + k][j + l] == 'A' ? 1 : 0;
            if (count == x * y)
                for (int k = 0; k < x; k++)
                    for (int l = 0; l < y; l++) check[i + k][j + l] = 1;
        }
    }
}
 
int main()
{
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
            check[i][j] = arr[i][j] == 'B' ? 1 : 0;
        }
    }
    solve(n, m, x, y);
    solve(n, m, y, x);
    int count = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++) if (check[i][j]) count++;
    if (count == n * m) cout << "YES\n";
    else cout << "NO\n";
}
