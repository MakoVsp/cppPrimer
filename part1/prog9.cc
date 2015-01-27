#include<iostream>

int main()
{
	std::cout << "Enter two numbers :" << std::endl;
	int v1, v2;
	std::cin >> v1 >> v2;
	if (v1 > v2)
	{
		int v3 = v1;
		v1 = v2;
		v2 = v3;
	}
	int sum = 0;
	for (; v1 <= v2; ++v1)
	{
		sum += v1;
	}
	std::cout << sum << std::endl;
	return 0;
}
