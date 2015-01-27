#include <iostream>

int main()
{
	int nCount = 0;
	int nCin;
	
	std::cout << "Enter some numbers: " << std::endl;
	std::cout << "end with \"/\"! " << std::endl;
	while (std::cin >> nCin)
	{
		if (nCin < 0)
		{
			++nCount;
		}
	}

	std::cout << "The negative numbers count is " << nCount << std::endl;
	return 0;
}
