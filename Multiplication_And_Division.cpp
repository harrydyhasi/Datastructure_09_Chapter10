#include <iostream>

using namespace std;

int F(int n)
{
    int a = 0;
    int b = 1;
    if (n == 0 || n == 1)
        return 1;
    else
    {
        for (int i = 1; i < n; i++)
        {
            int temp = a;
            a = b;
            b = a + temp;
        }

        return b;
    }
}
int main()
{

    int x, y, z;
    cin >> x >> y >> z;
    int w = 0;
    if (y >= z)
    {
        int l = 1;
        do
        {
            l += 1;
        } while (y >= z * F(l));
        do
        {
            if (y >= z * F(l))
            {
                w = w + x * F(l);
                y = y - z * F(l);
            }
            l--;
        } while (l != 1);
    }
    cout << w;
    return 0;
}