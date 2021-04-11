#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        int n, m;
        vector<int> fenceA;
        vector<int> fenceB;
        vector<int> paintera;
        vector<int> fenceIndex;
        cin >> n >> m;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            fenceA.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            fenceB.push_back(temp);
        }

        int currentPor = 0;
        for (int i = 0; i < m; i++)
        {
            // int temp;
            // cin >> temp;
            // painter.push_back(temp);
            int painter;
            cin >> painter;
            for (int j = 0; j < n; j++)
            {
            }
        }
        // for (int i = 0 ; i < m)
    }
    return 0;
}