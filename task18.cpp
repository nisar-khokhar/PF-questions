#include <iostream>
using namespace std;

void merge(int arr1[], int arr2[], int size1, int size2)
{
    int size = size1 + size2;
    cout << "Size of merged array would be :--->";
    cout << size << endl;

    int arr[size];

    for (int i = 0; i < size1; i++)
    {
        arr[i] = arr1[i];
    }
    int j = 0;
    for (int i = size - size1; i < size; i++)
    {
        arr[i] = arr2[j];
        j++;
    }
    cout << endl
         << "MERGED ARRAY ----> ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
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

    merge(arr, arr1, size1, size2);
}