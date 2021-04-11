//b_food_buying.cpp
#include <iostream>
using namespace std;
// Time limit exceed
int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        //Time limite exceed
        int s;
        int ans;
        cin >> s;
        ans = s;
        while (s > 0)
        {
            if (s >= 10)
            {
                s -= 10;
                s++;
                ans++;
            }
            else
            {
                s -= 10;
            }
        }
        cout << ans << endl;
    }
    return 0;
}