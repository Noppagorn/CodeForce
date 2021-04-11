#include <iostream>
#include <bitset>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

void Print(vector<int> arr);

int convert_int_to_binary(int n)
{
    string binary = bitset<8>(n).to_string(); //to binary
    cout << binary << "\n";
}

int find_index_min(vector<int> array, int i)
{
    int min = 1000000;
    int min_index = -1;
    for (int x = i; x < array.size(); x++)
    {
        if (array[x] < min)
        {
            min = array[x];
            min_index = x;
        }
    }
    return min_index;
}

void make_multation(int numbers[], int size, int target, int test_case)
{

    bool isHave = false;

    do
    {
        vector<int> array;
        vector<int> ans_array;
        int j;
        int count = 0;
        for (unsigned short i = 0; i < size; ++i)
        {
            // cout << numbers[i] << " ";
            array.push_back(numbers[i]);
            ans_array.push_back(numbers[i]);
        }

        for (int i = 0; i < array.size() - 1; i++)
        {
            j = find_index_min(array, i);
            count += (j + 1) - (i + 1) + 1;
            reverse(array.begin() + i, array.begin() + j + 1);
        }
        // cout << " : " << count << " : " << target << endl;
        if (count == target)
        {
            cout << "Case #" << test_case << ": ";
            Print(ans_array);
            isHave = true;
            // break;
        }

    } while (next_permutation(numbers, numbers + size));
    if (!isHave)
    {
        cout << "Case #" << test_case << ": "
             << "IMPOSSIBLE" << endl;
    }
}

int main()
{
    int size;
    int numbers[110];
    int test_case, target;

    cin >> test_case;
    for (int t = 1; t <= test_case; t++)
    {
        cin >> size >> target;
        for (int i = 1; i <= size; i++)
        {
            numbers[i - 1] = -1;
        }

        int index = 0;
        for (int i = 1; i <= size / 2; i += 1)
        {
            numbers[index++] = i * 2;
        }

        // int last = index;
        int is_odd = (size % 2 == 1) ? 1 : 0;
        for (int i = size + is_odd; i > 0; i -= 2)
        {
            numbers[index++] = i - 1;
        }

        // for (int i = 0; i < size; i++)
        // {
        //     cout << numbers[i] << " : ";
        // }
        // cout << endl;
        make_multation(numbers, size, target, t);
    }
    return 0;
}
void Print(vector<int> arr)
{
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl;
}
