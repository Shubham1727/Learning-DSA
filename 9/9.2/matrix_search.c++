#include <iostream>
using namespace std;

int main()
{

    int n, m;
    cin >> n >> m;
    int target;
    cin >> target;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    int r = 0, c = m - 1;
    bool found = false;
    while (r < n and c >= 0)
    {
        if (a[r][c] == target)
        {
            found = true;
        }
        else if (a[r][c] > target)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if (found)
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }

    return 0;
}