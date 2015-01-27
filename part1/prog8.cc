#include <iostream>

int main()
{
	std::cout << "Enter two numbers:" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	
	int v3 = 0;
	if (v1 > v2)
	{
		v3 = v1;
		v1 = v2;
		v2 = v3;
	}
	
	std::cout << "v1 = " << v1 << std::endl;
	std::cout << "v2 = " << v2 << std::endl;

	for (int nLineCount = 1; v1 <= v2; ++v1, ++nLineCount)
	{
		std::cout << v1 << "   ";
		if (nLineCount % 10 == 0)
		{
			std::cout << std::endl;	
		}
		//std::cout << v1 << "   ";
	}   
	std::cout << std::endl;
        
	return 0;
}       

