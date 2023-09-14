#include <iostream>
using namespace std;
int power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    if (b == 1)
    {
        return a;
    }

    int ans = power(a, b / 2);

    if (b & 1 == 0)
    {
        return a * ans * ans;
    }
    else
    {
        return ans * ans;
    }
}
int main()
{
    cout << power(8, 2);

    return 0;
}