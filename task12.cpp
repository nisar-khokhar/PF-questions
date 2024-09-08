#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 3, 2, 5, 6, 7};
    bool check = false;
    cout << endl;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 1; j < 10; j++)
        {
            if (j == i)
            {
                continue;
            }
            if (arr[i] != arr[j])
            {
                check = true;
                continue;
            }
            check = false;
            break;
        }
        // cout << "i-->" << arr[i] << "-->check-->" << check << endl;
        if (check == true)
        {
            cout << arr[i] << "  ";
        }
    }
    return 0;
}