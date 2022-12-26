#include <iostream>
using namespace std;
int main()
{
	int x, y;
	int z = 0;
	int w;
	cin >> x >> y;

	if (y >= z)
	{
		if (z >= y)
		{
			y = 0;
		}
		else
		{
			if (x >= z)
			{
				while (x >= y)
				{
					x = x - y;
				}
			}
			else
			{
				do
				{
					x = x + y;
				} while (x < z);
			}
		}
	}
	else
	{
		if (z >= x)
		{
			while (y >= x)
			{
				x = x - y;
			}
		}
		else
		{
			do
			{
				x = x + y;
			} while (x < z);
		}
	}
	cout << x;
	cout << endl;
	system("pause");
	return 0;
}
