#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 6}, targetNumber = 6;
    for (int i = 0; i < 4; i++)
    {

        for (int j = 1; j < 5; j++)
        {
            if (j == i)
            {
                continue;
            }
            if (arr[i] + arr[j] == targetNumber)
            {
                cout << endl
                     << arr[i] << " and " << arr[j] << endl;
                break;
            }
        }
    }
    return 0;
}