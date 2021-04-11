#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

// int process_dense(vector<int> input_arr)
// {
//     int count = 0;
//     for (int i = 0; i < input_arr.size() - 1; i++)
//     {
//         if (max(input_arr[i], input_arr[i + 1]) / min(input_arr[i], input_arr[i + 1]) <= 2)
//         {
//             continue;
//         }
//         else
//         {
//             if ()
//         }
//     }
// }

int main()
{
    int test_case;
    int length_arr;
    int prev;
    int current;
    int count, max_v, min_v;
    cin >> test_case;
    for (int tcase = 0; tcase < test_case; tcase++)
    {
        count = 0;
        cin >> length_arr;

        for (int i = 0; i < length_arr; i++)
        {
            if (i == 0)
            {
                cin >> prev;
                continue;
            }
            //process
            cin >> current;
            max_v = max(current, prev);
            min_v = min(current, prev);
            while (min_v * 2 < max_v)
            {
                min_v *= 2;
                count++;
            }
            prev = current;
        }
        cout << count << endl;
    }
    return 0;
}
