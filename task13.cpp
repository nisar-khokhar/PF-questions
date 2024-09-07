#include <iostream>
using namespace std;
int main()
{
    string toReverse = "hello babbar!";
    int n = toReverse.length();
    for (int i = 0; i < n / 2; i++)
    {
        int temp = toReverse[i];
        toReverse[i] = toReverse[n - (i + 1)];
        toReverse[n - (i + 1)] = temp;
    }
    cout << endl
         << toReverse << endl;
    return 0;
}