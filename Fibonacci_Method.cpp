#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cin >> x>> y;
	
	if(x >= y)
	{
		int z = y;
		while(x >= z)
		{
			y = z;
			z = y + z;
		}	
		while (y < z)
		{
			if(x >= y)
			{
				x = x - y;
			}
			y = z - y;
			z = y;
		}	

	}	
	cout << x;
	return 0;
}	
