#include <iostream>

int main()
{
	int nSumFor = 0;
	for (int nIndex = 50; nIndex <= 100; ++nIndex)
	{
		nSumFor += nIndex;
	}
	std::cout << "nSumFor = " << nSumFor << std::endl;
	
	int nSumWhile = 0;
	int nIdx = 50;
	while (nIdx <= 100)
	{
		nSumWhile += nIdx;
		++nIdx;
	}
	std::cout << "nSumWhile = " << nSumWhile << std::endl;

	int nIdxWhileDown = 10;
	while (nIdxWhileDown >= 0) 
	{
		std::cout << "nIdxWhileDown = " << nIdxWhileDown << std::endl;
		--nIdxWhileDown;
	}

	for (int nIdxForDown = 10; nIdxForDown >= 0; --nIdxForDown)
	{
		std::cout << "nIdxForDown = " << nIdxForDown << std::endl;
	}

	return 0;
}
