#include <iostream>
using namespace std;

void sortArray(int arr[], int size)
{
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
    cout << endl
         << "MAX NUMBER ---> " << arr[size - 1];
    cout << endl
         << "MIN NUMBER ---> " << arr[0];
}

int main()
{
    int arr[8] = {2, -2, 0, 10, 67, -9, 100, -99};
    int size = 8, max = arr[0], min = arr[0];
    cout << endl
         << "AFTER SORTING ----> ";
    sortArray(arr, size);
    cout << endl
         << "WITHOUT SORTING ----> ";
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
        if (min > arr[i])
        {
            min = arr[i];
        }
    }
    cout << endl
         << "MAX NUMBER ---> " << max;
    cout << endl
         << "MIN NUMBER ---> " << min;

    return 0;
}