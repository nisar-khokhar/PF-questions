#include <iostream>
using namespace std;
void factorial(int n)
{
    int res = 1;
    for (int i = 1; i <= n; i++)
    {
        res = res * i;
    }
    cout << endl
         << res << endl;
    // return res;
}

int recFact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * recFact(n - 1);
}
int main()
{
    int number = 5;
    factorial(number);
    cout << "RECURSIVE FACTORIAL---->" << recFact(5);
    // cout << endl
    //  << fact;
}