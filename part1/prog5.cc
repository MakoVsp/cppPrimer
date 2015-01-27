#include <iostream>

int main() 
{
	std::cout << "Enter two numbers : " << std::endl;
	
	int n1, n2;
	std::cin >> n1 >> n2;

	int n3 = 0;
	if (n1 >= n2) 
	{
		n3 = n2;
		n2 = n1;
		n1 = n3;
	}
	std::cout << "n1 = " << n1 << " n2 = " << n2 << std::endl;
	
	int nSum = 0;
	for (; n1 <= n2; ++n1)
	{
		nSum += n1;
	}
	std::cout << "sum = " << nSum << std::endl; 

}
