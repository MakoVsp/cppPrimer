#include <iostream>

int main()
{
	int nSum = 0;
	for (int nIndex = -100; nIndex <= 100; ++nIndex)
	{
		nSum += nIndex;
	}
	std::cout << "nSum = " << nSum << std::endl;
}
