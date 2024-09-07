#include <iostream>
using namespace std;

int main()
{
    int arr1[7] = {1, 2, 3, 4, 3, 2, 1};
    char arr2[5] = {'c', 'i', 'v', 'i', 'c'};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int revArr1[size1], revArr2[size2];
    bool check = true;
    for (int i = size2 - 1, j = 0; i >= 0, j < size2; i--, j++)
    {
        revArr2[j] = arr2[i];
    }
    for (int i = 0; i < size2; i++)
    {
        if (arr2[i] != revArr2[i])
        {
            check = false;
            cout << "\n\nNOT PALINDROME";
            break;
        }
    }
    if (check)
    {
        cout << endl
             << "PALINDROME IT IS";
    }

    return 0;
}