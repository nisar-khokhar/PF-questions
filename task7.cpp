#include <iostream>
#include <algorithm>
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
    int arr[9] = {11, 11, 22, 22, 33, 33, 44, 44, 44}, count = 1, size = 9, newSize = 1;

    int min, temp, min_index;

    // sorting the array
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
         << endl
         << "SORTED ARRAY --> ";
    printArray(arr, size);

    // counting the number of elements
    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i + 1] != arr[i])
        {
            newSize++;
        }
    }

    cout << "\n\nTOTAL DIFFERENT ELEMENTS-->" << newSize << endl;

    // it will double the array size for the element is followed by number of its occurences
    int newArr[newSize * 2], j = 0;

    // create an array of elements followed by its number of occurences
    for (int i = 0; i < size; i++)
    {

        if (arr[i] != arr[i + 1])
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
        // if (i == size - 1)
        // {
        //     newArr[j] = arr[i];
        //     newArr[j + 1] = count;
        //     break;
        // }
    }

    printArray(newArr, newSize * 2);

    int max = newArr[1],
        mode, maxCount = 0;

    for (int i = 1; i < newSize * 2; i = i + 2)
    {
        if (max <= newArr[i])
        {
            max = newArr[i];
        }
    }

    for (int i = 1; i < newSize * 2; i = i + 2)
    {
        if (max == newArr[i])
        {
            maxCount++;
        }
    }

    int modeArray[maxCount], k = 0;

    for (int i = 1; i < newSize * 2; i = i + 2)
    {
        if (newArr[i] == max)
        {
            modeArray[k] = newArr[i - 1];
            k++;
        }
    }

    cout << endl
         << "MODE VALUE/s--> ";

    printArray(modeArray, maxCount);
    // for (int i = 0; i < maxCount; i++)
    // {
    //     cout << modeArray[i] << "  ";
    // }

    return 0;
}