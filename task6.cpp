#include <iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[12] = {1, 2, 0, 3, 0, 4, 5, 0, 1, 0, 0, 1}, size = 12, j = 0, count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;

            j++;
        }
    }
    printArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    int k = size - 1;
    int limit = k - count;
    for (int i = 0; i < size; i++)
    {
        if (k == limit)
        {
            break;
        }
        if (arr[i] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[k];
            arr[k] = temp;
            k--;
        }
    }

    printArray(arr, size);

    return 0;
}