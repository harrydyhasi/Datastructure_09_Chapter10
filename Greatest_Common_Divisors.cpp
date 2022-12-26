#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cin >> x >> y;
    int z = y;
    z = z + z;
    while (!(y >= z))
    {
        while (x >= z)
        {
            int tmpY = y, tmpZ = z;
            y = z;
            z = tmpY + tmpZ;
        }
        do
        {
            if (x >= y)
                x = x - y;
            int tmpY = y;
            y = z - y;
            z = tmpY;
        } while (y < z);

        int tmpX = x;
        x = y;
        y = tmpX;
        z = y;
        z = z + z;
    }
    cout << x;

    return 0;
}