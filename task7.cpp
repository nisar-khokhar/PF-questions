#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[10] = {11, 22, 33, 22, 33, 44, 22, 11, 22, 33}, count = 1, size = 10, newSize = 1;

    int min, temp, min_index;

    for (int i = 0; i < size; i++)
    {
        min = arr[i];
        min_index = i;
        for (int j = i + 1; j < size; j++)
        {
            if (min > arr[j])
            {
                min = arr[j];
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = min;
        arr[min_index] = temp;
    }

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] != arr[i])
        {
            newSize++;
        }
    }

    int newArr[newSize * 2], j = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i + 1] != arr[i])
        {
            newArr[j] = arr[i];
            newArr[j + 1] = count;
            j = j + 2;
            count = 1;
            continue;
        }
        if (arr[i + 1] == arr[i])
        {
            count++;
        }
    }

    int max = newArr[1], mode;
    for (int i = 1; i < newSize * 2; i = i + 2)
    {
        if (max < newArr[i])
        {
            max = newArr[i];
            mode = newArr[i - 1];
        }
    }

    cout << endl
         << "Frequency: " << max << endl
         << "Mode Value: " << mode;

    return 0;
}