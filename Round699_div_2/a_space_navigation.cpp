//space Navigation

#include <iostream>
#include <vector>
using namespace std;

int decode(char value)
{
    if (value == 'U' || value == 'R')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

int main()
{
    int testCase;
    cin >> testCase;
    for (int t = 0; t < testCase; t++)
    {
        int x_start = 0, y_start = 0;
        int xP, yP;
        bool xFin = false, yFin = false;
        string command;

        cin >> xP >> yP;
        cin >> command;
        for (int i = 0; i < command.length(); i++)
        {
            if (x_start != xP)
            {
                if ((command[i] == 'R' || command[i] == 'L') && xP > 0)
                {
                    if (decode(command[i]) == 1)
                    {
                        x_start += 1;
                    }
                }
                else if ((command[i] == 'R' || command[i] == 'L') && xP < 0)
                {
                    if (decode(command[i]) == -1)
                    {
                        x_start -= 1;
                    }
                }
            }

            if (y_start != yP)
            {

                if ((command[i] == 'U' || command[i] == 'D') && yP > 0)
                {
                    if (decode(command[i]) == 1)
                    {
                        y_start += 1;
                    }
                }
                else if ((command[i] == 'U' || command[i] == 'D') && yP < 0)
                {
                    if (decode(command[i]) == -1)
                    {
                        y_start -= 1;
                    }
                }
            }
        }
        if (x_start == xP && y_start == yP)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}