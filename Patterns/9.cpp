//     1
//    121
//   12321
//  1234321
// 123454321
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        int j = 1;
        int count = 1;
        while (j <= i)
        {
            cout << count++;
            j++;
        }

        int k = 1;
        int m = i - 1;
        while (k <= i - 1)
        {
            cout << m--;
            k++;
        }
        cout << endl;
        i++;
    }

    return 0;
}