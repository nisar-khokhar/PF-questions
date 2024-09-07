#include <iostream>
using namespace std;

void printAtEven(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 == 0)
        {
            cout << arr[i] << "  ";
        }
    }
}
void printAtOdd(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (i % 2 != 0)
        {
            cout << arr[i] << "  ";
        }
    }
}
int main()
{
    int arr[11] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    cout << endl
         << "EVEN INDICES' VALUES : ";
    printAtEven(arr, 11);
    cout << endl
         << "ODD INDICES' VALUES : ";
    printAtOdd(arr, 11);
    return 0;
}
