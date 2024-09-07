#include <iostream>
using namespace std;
int main()
{
    int arr[4] = {0, 2, 3, 5}, temp = arr[0], missingArr[2], j = 0;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 1; i < size; i++)
    {
        if (arr[i] != temp + 1)
        {
            missingArr[j] = temp + 1;
            j++;
            // continue;
        }
        temp = arr[i];
    }
    cout << "\n\n--------\n";
    for (int i = 0; i < 2; i++)
    {
        cout << endl
             << missingArr[i] << "  ";
    }
    return 0;
}