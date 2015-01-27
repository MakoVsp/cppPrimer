#include <iostream>

int main()
{
       int nSum = 0;
       int nIndex = 1;

     	while(nIndex <= 10)
     	{
     		std::cout << "nIndex = " << nIndex << std::endl;
     		nSum += nIndex;
     		std::cout << "nSum = " << nSum << std::endl;
     		++nIndex;
     		std::cout << "nIndex++ = " << nIndex << std::endl; 
     	}

     	std::cout << "nSum is " << nSum << std::endl;
	
//    int nSum = 0;
//   
//   	for (int nIndex = 1; nIndex <= 10; ++nIndex)
//   	{
//   		std::cout << "nIndex = " << nIndex << std::endl;
//   		nSum += nIndex;
//   	}
//   
//   	std::cout << "nSum is " << nSum << std::endl;

	return 0;
}
