#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int process(string st1, string st2)
{
    int ans = 0;
    for (int i = 0; i < st1.length(); i++)
    {
        if (st1[i] >= 'a')
        {
            st1[i] = (st1[i] - 'a') + 'A';
        }
        if (st2[i] >= 'a')
        {
            st2[i] = (st2[i] - 'a') + 'A';
        }
        if (st1[i] > st2[i])
        {
            ans = 1;
            break;
        }
        else if (st1[i] < st2[i])
        {
            ans = -1;
            break;
        }
        else
        {
            ans = 0;
        }
    }
    return ans;
}

int main()
{
    string st1;
    string st2;
    int ans;
    cin >> st1;
    cin >> st2;

    ans = process(st1, st2);
    cout << ans << endl;
    return 0;
}
