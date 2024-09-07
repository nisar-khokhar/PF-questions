#include <iostream>
using namespace std;

void sortArray(int arr[], int size)
{
    int min, temp, min_index;
    cout << endl
         << "SORTED ARRAY----> ";
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
        cout << arr[i] << " -- ";
    }
}

int main()
{
    int arr[3] = {1, 3, 5};
    int arr1[3] = {0, 2, 4};

    int size1 = sizeof(arr) / sizeof(arr[0]);
    cout << "\nSize1:---->";
    cout << size1;

    int size2 = sizeof(arr1) / sizeof(arr1[0]);
    cout << "\nSize2:--->";
    cout << size2 << endl;
    int size3 = size1 + size2;
    cout << "Size 3:--->";
    cout << size3 << endl;
    int arr2[size3];

    for (int i = 0; i < 3; i++)
    {
        arr2[i] = arr[i];
    }
    int j = 0;
    for (int i = size3 - size1; i < size3; i++)
    {
        arr2[i] = arr1[j];
        j++;
    }
    // for (int i = 0; i < size3; i++)
    // cout << "Hello World";
    for (int i = 0; i < size3; i++)
    {
        cout << arr2[i] << " ";
    }

    sortArray(arr2, size3);

    return 0;
}