#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int main()
{
    int line;
    int x = 0, y = 0, z = 0;
    string ans;
    int tempx, tempy, tempz;
    cin >> line;

    for (int i = 0; i < line; i++)
    {
        cin >> tempx >> tempy >> tempz;
        x += tempx;
        y += tempy;
        z += tempz;
    }

    if (x == 0 && y == 0 && z == 0)
    {
        ans = "YES";
    }
    else
    {
        ans = "NO";
    }
    cout << ans << endl;
    return 0;
}
