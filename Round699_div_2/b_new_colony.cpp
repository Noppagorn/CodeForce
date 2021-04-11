#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        int n, k;
        vector<int> mountains;
        int ans;

        int lastPo;
        cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            int h;
            cin >> h;
            mountains.push_back(h);
        }
        for (int i = 0; i < k; i++)
        {
            bool isFall = true;
            for (int j = 0; j < mountains.size() - 1; j++)
            {
                if (mountains[j] < mountains[j + 1])
                {
                    mountains[j] += 1;
                    isFall = false;
                    lastPo = j + 1;
                    break;
                }
            }
            // for (int j = 0; j < mountains.size(); j++)
            // {
            //     cout << "," << mountains[j];
            // }
            // cout << endl;
            if (isFall)
            {
                ans = -1;
                break;
            }
            else
            {
                ans = lastPo;
            }
        }
        cout << ans << endl;
    }
    return 0;
}