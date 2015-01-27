#include <iostream>

int main()
{
	std::cout << "Enter two Numbers:" << std::endl;
	int nBase, nExp;
	std::cin >> nBase >> nExp;
	
	if (nExp < 0)
	{
		std::cout << "Exp must bigger than 0!" << std::endl;
		return -1;
	}

	int nResult = 1;
	for (int idx = 0; idx < nExp; ++idx)
	{
		nResult *= nBase;
	}

	std::cout << "Result = " << nResult << std::endl;

	return 0;
}
