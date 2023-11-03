#include <fstream>
#include <iostream>
#define VMAX 999999999
using namespace std;
ifstream fin("numere.in");
int main()
{
	int min1, min2, min3, x;
	min1 = min2 = min3 = VMAX;
	while (fin >> x)
	{
		if (x % 3 == 0)
		{
			if (x < min1)
			{
				min3 = min2;
				min2 = min1;
				min1 = x;
			}
			else if (x < min2)
			{
				min3 = min2;
				min2 = x;
			}
			else if (x < min3)
			{
				min3 = x;
			}
		}
	}
	fin.close();
	cout << min1 << ' ' << min2 << ' ' << min3;
	return 0;
}
