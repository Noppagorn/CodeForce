//a_add_divide.cpp

#include <iostream>
using namespace std;

int main()
{
    int testCase;
    cin >> testCase;

    for (int t = 0; t < testCase; t++)
    {
        int a, b;
        int count = 0;
        cin >> a >> b;
        while (a != 0)
        {
            if (b == 1 || a == b)
            {
                b += 1;
                cout << "a :(2) " << a << endl;
                count++;
            }
            else
            {
                a = a / b;
                cout << "a :(1) " << a << endl;
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}